#include "LengthUnit.h"

class LengthUnit;

class Length {
public:
	bool operator == (const Length &otherLength) const;
	bool operator != (const Length &otherLength) const;
	Length operator + (const Length &otherLength) const;
	
private:
	friend class LengthFactory;

	lengthType unit;
	amountType amount, amountToBase;

	Length(amountType, lengthType);
};