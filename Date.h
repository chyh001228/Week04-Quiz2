#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Date {
	friend std::ostream& operator<<(std::ostream&, const Date&);
	friend Date firstbirthday(const Date&);
public:
	Date(int m = 1, int d = 1, int y = 1900); // default constructor 
	void setDate(int, int, int); // set month, day, year
	Date& operator++(); // prefix increment operator 
	Date operator++(int); // postfix increment operator 
	Date& operator+=(unsigned int); // add days, modify object
	static bool leapYear(int); // is year a leap year?
	bool endOfMonth(int) const; // is day at the end of month?
	int schoolyear() const;
private:
	unsigned int month;
	unsigned int day;
	unsigned int year;
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; // days per month
	void helpIncrement(); // utility function for incrementing date
};