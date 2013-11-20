enum lengthType {inch, feet, yard, mile, typeNum};

#define amountType int

#define MILE(a) (Length::getLength(a,mile))
#define YARD(a) (Length::getLength(a,yard))
#define FEET(a) (Length::getLength(a,feet))
#define INCH(a) (Length::getLength(a,inch))

class Length {
private:
	lengthType unit;
	amountType amount, amountToBase;

	static const amountType INCH_TO_BASE;
	static const amountType FEET_TO_INCH;
	static const amountType YARD_TO_FEET;
	static const amountType MILE_TO_YARD;
	static const amountType ratioToBase[typeNum];

private:
	Length(amountType, lengthType);	

public:
	static Length& getLength(amountType amt, lengthType lt);

	bool operator == (const Length &otherLength) const;
	bool operator != (const Length &otherLength) const;
	Length operator + (const Length &otherLength) const;
};