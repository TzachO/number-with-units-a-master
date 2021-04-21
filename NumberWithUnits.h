#pragma once

#include <string>
#include <iostream>

using namespace std;

class NumberWithUnits
{
private:
	double _num;
	string _units;
public:
	NumberWithUnits(double num, string units);

	double getNum();
	string getUnits();

	//TODO: 6 arithmetic, 6 conditionals, 2 increment/decrement

	friend NumberWithUnits operator+(NumberWithUnits lhs, NumberWithUnits& rhs);
	friend NumberWithUnits operator+(NumberWithUnits& rhs);
	NumberWithUnits& operator+=(const NumberWithUnits& rhs);

	friend NumberWithUnits operator-(NumberWithUnits lhs, NumberWithUnits& rhs);
	friend NumberWithUnits operator-(NumberWithUnits& rhs);
	NumberWithUnits& operator-=(const NumberWithUnits& rhs);

	friend bool operator<(const NumberWithUnits& lhs, const NumberWithUnits& rhs);
	friend bool operator<=(const NumberWithUnits& lhs, const NumberWithUnits& rhs);
	friend bool operator>(const NumberWithUnits& lhs, const NumberWithUnits& rhs);
	friend bool operator>=(const NumberWithUnits& lhs, const NumberWithUnits& rhs);
	friend bool operator==(const NumberWithUnits& lhs, const NumberWithUnits& rhs);
	friend bool operator!=(const NumberWithUnits& lhs, const NumberWithUnits& rhs);

	NumberWithUnits& operator++(); // prefix
	NumberWithUnits operator++(int); // postfix

	NumberWithUnits& operator--(); // prefix
	NumberWithUnits operator--(int); // postfix
	
	friend ostream& operator<<(ostream& os, NumberWithUnits obj);
};

