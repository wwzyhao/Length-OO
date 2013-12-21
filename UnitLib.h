#ifndef _UNITLIB_H_  
#define _UNITLIB_H_  
  
#define unitType int
#define amountType int

#include <string>

using namespace std;

enum unitKind{length, volume, typeNum};
enum lengthType {inch, feet, yard, mile, lengthTypeNum};
enum volumeType {TSP, TBSP, Oz, volumeTypeNum};

class UnitLib {	
private:
	friend class Test;
	friend class Unit;
	friend class Length;
	friend class Volume;

	static const string lengthName[lengthTypeNum];
	static const amountType lengthRatioToBase[lengthTypeNum];
	static const amountType INCH_TO_BASE;
	static const amountType FEET_TO_INCH;
	static const amountType YARD_TO_FEET;
	static const amountType MILE_TO_YARD;

	static const string volumeName[volumeTypeNum];
	static const amountType volumeRatioToBase[volumeTypeNum];
	static const amountType TSP_TO_BASE;
	static const amountType TBSP_TO_TSP;
	static const amountType OZ_TO_TBSP;
};

#endif