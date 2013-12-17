#include "Unit.h"

class Length: public Unit{
public:
	bool operator == (const Length &otherLength) const;
	bool operator != (const Length &otherLength) const;
	Length operator + (const Length &otherLength) const;

private:
	friend class LengthFactory;

	Length(amountType, lengthType);
};