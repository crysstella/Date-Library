#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

int main()
{
	Date date;
	int d, m, y;
	cout << "Enter date ( day, month, and year): " << endl;
	cin >> d >> m >> y;

	date.setDate(d, m, y);
	date.printDate();
	return 0;
}