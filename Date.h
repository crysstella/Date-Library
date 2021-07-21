#pragma once

class Date
{
	int day;
	int month;
	int year;
public:
	void setDate(int d, int m, int y);

	int getDay() const;
	int getMonth() const;
	int getYear() const;
	void printDate();

};

