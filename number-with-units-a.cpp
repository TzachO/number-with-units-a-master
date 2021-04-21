#include <iostream>
#include "NumberWithUnits.h"

using namespace std;



int main()
{
	/*
	NumberWithUnits A(2, "km");
	NumberWithUnits B(1, "m");

	cout << A.getNum() << " " << A.getUnits() << endl;
	B = A + A;
	cout << B.getNum() << " " << B.getUnits() << endl;
	A += B;
	cout << A.getNum() << " " << A.getUnits() << endl;
	cout << (+A).getNum() << " " << (+A).getUnits() << endl;
	*/

	NumberWithUnits A(3, "km");
	NumberWithUnits B(1, "km");

	cout << A << endl;
	B = A - B; // 2
	cout << B << endl;
	A -= B; // 1
	cout << A << endl;
	cout << (-A) << endl; // -1

	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	if (A < B) {
		cout << "A < B" << endl;
	}
	else {
		cout << "A >= B" << endl;
	}

	if (A > B) {
		cout << "A > B" << endl;
	}
	else {
		cout << "A <= B" << endl;
	}

	if (A <= B) {
		cout << "A <= B" << endl;
	}
	else {
		cout << "A > B" << endl;
	}

	if (A >= B) {
		cout << "A >= B" << endl;
	}
	else {
		cout << "A < B" << endl;
	}

	if (A == A) {
		cout << "A == A" << endl;
	}
	else {
		cout << "A != A" << endl;
	}

	if (A != B) {
		cout << "A != B" << endl;
	}
	else {
		cout << "A == B" << endl;
	}

	cout << ++A << endl;
	cout << A++ << endl;
	cout << A << endl;

	cout << --A << endl;
	cout << A-- << endl;
	cout << A << endl;
}