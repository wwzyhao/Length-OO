#include <iostream>
#include <assert.h>
#include "LengthFactory.h"

using namespace std;

void test() {
	//Case One
	cout << "Case One tesing..." << endl;
	assert(MILE(1) == MILE(1));
	assert(MILE(1) != MILE(2));
	cout << "Case One tesing success!" << endl << endl;

	//Case Two
	cout << "Case Two tesing..." << endl;
	assert(MILE(1) == YARD(1760));
	assert(MILE(1) != YARD(1660));
	cout << "Case Two tesing success!" << endl << endl;

	//Case Three
	cout << "Case Three tesing..." << endl;
	assert(YARD(1) == FEET(3));
	assert(FEET(1) == INCH(12));
	cout << "Case Three tesing success!" << endl << endl;

	//Case Four
	cout << "Case Four tesing..." << endl;
	assert(INCH(13) + INCH(11) == FEET(2));
	assert(FEET(3) + YARD(2) == YARD(3));
	cout << "Case Four tesing success!" << endl;

	cout << sizeof(enum lengthType)/sizeof(int);
}

int main() {
	test();
	return 0;
}