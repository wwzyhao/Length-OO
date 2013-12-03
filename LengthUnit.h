enum lengthType {inch, feet, yard, mile, typeNum};

#define amountType int

class LengthUnit {	
private:
	friend class Length;
	
	static const amountType ratioToBase[typeNum];
	static const amountType INCH_TO_BASE;
	static const amountType FEET_TO_INCH;
	static const amountType YARD_TO_FEET;
	static const amountType MILE_TO_YARD;
};