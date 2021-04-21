#include "NumberWithUnits.h"

NumberWithUnits::NumberWithUnits(double num, string units)
{
	this->_num = num;
	this->_units = units;
}

double NumberWithUnits::getNum()
{
	return this->_num;
}

string NumberWithUnits::getUnits()
{
	return this->_units;
}

NumberWithUnits& NumberWithUnits::operator+=(const NumberWithUnits& rhs)
{

	if (this->_units == rhs._units) {
		this->_num += rhs._num;
	}
	else if (this->_units == "km") {
		this->_num += rhs._num / 1000;
	}
	else {
		this->_num += rhs._num * 1000;
	}

	return *this;
}

NumberWithUnits operator+(NumberWithUnits lhs, NumberWithUnits& rhs)
{
	string units = lhs.getUnits();
	double num = lhs.getNum();

	if (units == rhs.getUnits()) {
		num += rhs.getNum();
	}
	else if (units == "km") {
		num += rhs.getNum() / 1000;
	}
	else {
		num += rhs.getNum() * 1000;
	}

	NumberWithUnits res(num, units);

	return res;
}

NumberWithUnits operator+(NumberWithUnits& rhs)
{
	NumberWithUnits res(rhs.getNum(), rhs.getUnits());

	return res;
}

NumberWithUnits& NumberWithUnits::operator-=(const NumberWithUnits& rhs)
{

	if (this->_units == rhs._units) {
		this->_num -= rhs._num;
	}
	else if (this->_units == "km") {
		this->_num -= rhs._num / 1000;
	}
	else {
		this->_num -= rhs._num * 1000;
	}

	return *this;
}



NumberWithUnits operator-(NumberWithUnits lhs, NumberWithUnits& rhs)
{
	string units = lhs.getUnits();
	double num = lhs.getNum();

	if (units == rhs.getUnits()) {
		num -= rhs.getNum();
	}
	else if (units == "km") {
		num -= rhs.getNum() / 1000;
	}
	else {
		num -= rhs.getNum() * 1000;
	}

	NumberWithUnits res(num, units);

	return res;
}

NumberWithUnits operator-(NumberWithUnits& rhs)
{
	NumberWithUnits res(-rhs.getNum(), rhs.getUnits());

	return res;
}

bool operator<(const NumberWithUnits& lhs, const NumberWithUnits& rhs)
{
	string units = lhs._units;

	if (units == rhs._units) {
		return lhs._num < rhs._num;
	}
	else if (units == "km") {
		return lhs._num < rhs._num / 1000;
	}
	else {
		return lhs._num < rhs._num * 1000;
	}
}

bool operator<=(const NumberWithUnits& lhs, const NumberWithUnits& rhs)
{
	return !(lhs > rhs);
}

bool operator>(const NumberWithUnits& lhs, const NumberWithUnits& rhs)
{
	return rhs < lhs;
}

bool operator>=(const NumberWithUnits& lhs, const NumberWithUnits& rhs)
{
	return !(lhs < rhs);
}

bool operator==(const NumberWithUnits& lhs, const NumberWithUnits& rhs)
{
	return !(lhs < rhs) && !(lhs > rhs);
}

bool operator!=(const NumberWithUnits& lhs, const NumberWithUnits& rhs)
{
	return !(lhs == rhs);
}

NumberWithUnits& NumberWithUnits::operator++()
{
	++this->_num;
	return *this;
}

NumberWithUnits NumberWithUnits::operator++(int){
	NumberWithUnits old = *this;

	operator++();

	return old;
}

NumberWithUnits& NumberWithUnits::operator--()
{
	--this->_num;
	return *this;
}

NumberWithUnits NumberWithUnits::operator--(int)
{
	NumberWithUnits old = *this;

	operator--();

	return old;
}

ostream& operator<<(ostream& os, NumberWithUnits obj)
{
	return os << obj._num << "[" << obj._units << "]";
}