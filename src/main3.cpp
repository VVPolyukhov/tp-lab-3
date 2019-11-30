#include "DateTime.h"

int main() {

	DateTime date1(30, 11, 2019);
	cout << "Data: " << date1.getToday() << endl;
	cout << "Tomorrow: " << date1.getTomorrow() << endl;
	cout << "Yesterday: " << date1.getYesterday() << endl;

	DateTime date2(1, 11, 2018);
	cout << "Difference between date1 and date2: " << date1.getDifference(date2) << " day(s)";

	return 0;
}