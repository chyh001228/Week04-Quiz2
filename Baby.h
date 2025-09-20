#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "Date.h"

using namespace std;

class Baby {
public:
	Baby(const std::string & = "", const Date & = Date());
	void setName(string&);
	void setBirthDate(Date&);
	string getName() const;
	Date getBirthDate() const;
private:
	string name;
	Date birthDate;
};