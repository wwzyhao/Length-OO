#include <iostream>
#include <assert.h>
#include <string>
#include "UnitFactory.h"
#include "LengthFactory.h"
#include "VolumeFactory.h"

using namespace std;

class Test
{
private:
	int testUnitNum;
	const amountType* testUnitRatio;
	const string* testUnitName;
public:
	void printUnit(Unit u) {
		int i, j, n, m, r;
		if(u.kind == length) {
			testUnitRatio = UnitLib::lengthRatioToBase;
			testUnitName = UnitLib::lengthName;
			testUnitNum = lengthTypeNum;
		}
		else {
			testUnitRatio = UnitLib::volumeRatioToBase;
			testUnitName = UnitLib::volumeName;
			testUnitNum = volumeTypeNum;
		}
		if(u.amountToBase == 0) {
			cout << 0 << ' ' << testUnitName[u.unit] << endl;
			return;
		}
		for (i = 0; i < testUnitNum && u.amountToBase > testUnitRatio[i]; i++);
		if(u.unit == testUnitNum - 1 || !(u.amountToBase % testUnitRatio[i - 1])) {
			cout << u.amount/testUnitRatio[i - 1] <<  ' ' << testUnitName[i - 1] <<endl;
			return;
		}
		for (j = i - 1, n = 0, m = u.amountToBase; j >= u.unit; j--) {
			r = m % testUnitRatio[j];
			if(r) {
				cout << m / testUnitRatio[j]<< ' ' << testUnitName[j] << ' ';
				m -= r;
				n++;
			}
		}
		if(n < 2)
			cout << u.amount % (testUnitRatio[i-1] / testUnitRatio[i-2]) << ' ' <<testUnitName[u.unit] << endl;
		else
			cout << endl;

		return;
	}

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
		cout << "Case Four tesing success!" << endl << endl;

		//Case Five
		cout << "Case Five tesing..." << endl;
		assert(TBSP(1) == TSP(3));
		assert(TBSP(1) + TSP(3) == TSP(6));
		cout << "Case Five tesing success!" << endl << endl;

		//Case Six
		cout << "Case Five tesing..." << endl;
		printUnit(MILE(0));
		printUnit(INCH(14));
		printUnit(INCH(24));
		printUnit(INCH(39));
		printUnit(YARD(1762));
		cout << "Case Five tesing success!" << endl << endl;

	}

};

int main() {
	Test t;
	t.test();
	return 0;
}