#define unitType int
#define amountType int

enum lengthType {inch, feet, yard, mile, typeNum};

class UnitLib {	
private:
	friend class Unit;
	friend class Length;

	static const amountType lengthRatioToBase[typeNum];
	static const amountType INCH_TO_BASE;
	static const amountType FEET_TO_INCH;
	static const amountType YARD_TO_FEET;
	static const amountType MILE_TO_YARD;
};