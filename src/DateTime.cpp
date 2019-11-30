#include "DateTime.h"

string DateTime::Month[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
string DateTime::Day[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };


DateTime::DateTime(int day, int month, int year)
{
	time_t seconds = time(NULL);
	data_time = *localtime(&seconds);
	data_time.tm_mday = day;
	data_time.tm_mon = month - 1;
	data_time.tm_year = year - 1900;
	mktime(&data_time);
}

// Объект использует текущую дату
DateTime::DateTime()
{
	time_t seconds = time(NULL);
	data_time = *localtime(&seconds);
	cout << data_time.tm_wday;
}

// Cоздаём копию другого объекта
DateTime::DateTime(const DateTime& copy)
{
	data_time = copy.data_time;
}

// Возвращение текущей даты в виде строки, с указанием дня недели и названия месяца (например 07 november 2018, wedensday)
string DateTime::getToday()
{
	return getData(data_time);
}

// Возвращение даты вчерашнего дня в виде строки.
string DateTime::getYesterday()
{
	return getPast(1);
}

// Возвращение даты завтрашнего дня в виде строки.
string DateTime::getTomorrow()
{
	return getFuture(1);
}

// Возвращение даты через N дней в прошлом
string DateTime::getPast(unsigned int N)
{
	time_t seconds = mktime(&data_time);
	seconds -= N * 86400;
	return getData(*localtime(&seconds));
}

// Возвращение даты через N дней в будущем
string DateTime::getFuture(unsigned int N)
{
	time_t seconds = mktime(&data_time);
	seconds += N * 86400;
	return getData(*localtime(&seconds));
}

// Для расчёта разницы (в днях) между двумя датами
int DateTime::getDifference(DateTime& data)
{
	// 86400 - number of seconds in one day 
	return abs(mktime(&data_time) - mktime(&data.data_time)) / 86400;
}

string DateTime::getData(tm& data_time)
{
	string Data = "";
	Data += to_string(data_time.tm_mday) + " " +
			Month[data_time.tm_mon] + " " +
			to_string(data_time.tm_year + 1900) + ", " + 
			Day[data_time.tm_wday];
	return Data;
}