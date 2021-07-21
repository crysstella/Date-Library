#include "Date.h"
#include <iostream>

using namespace std;

void Date::setDate(int d, int m, int y)
{
	if ((d > 0) && (d < 32) && (m > 0) && (m < 13) && (y > 0))
	{
		day = d;
		month = m;
		year = y;
	}
	else
	{
		cout << "Your input is wrong!";
		EXIT_FAILURE;
	}
}

int Date::getDay() const
{
	return day;
}

int Date::getMonth() const
{
	return month;
}

int Date::getYear() const
{
	return year;
}

void Date::printDate()
{
	cout << day << "/" << month << "/" << year;
}

