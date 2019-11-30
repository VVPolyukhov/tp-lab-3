#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class DateTime
{
	private:
		tm data_time;
		static string Month[];
		static string Day[];
		string getData(tm&);
	public:
		DateTime(int, int, int);
		DateTime();
		DateTime(const DateTime&);
		string getToday();
		string getYesterday();
		string getTomorrow();
		string getFuture(unsigned int);
		string getPast(unsigned int);
		int getDifference(DateTime&);
};