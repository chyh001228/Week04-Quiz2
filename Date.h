#pragma once
#ifndef  Date_H
#define Date_H

class Date
{
private:
	unsigned int month;
	unsigned int day;
	unsigned int year;

	unsigned int checkDay(int) const;
public:
	static const unsigned int monthsPerYear = 12;
	explicit Date(int = 1, int = 1, int = 1900);
	void print() const;
	~Date();
};
#endif
