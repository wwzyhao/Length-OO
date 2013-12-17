#include "Length.h"

#define MILE(a) (LengthFactory::makeLength(a,mile))
#define YARD(a) (LengthFactory::makeLength(a,yard))
#define FEET(a) (LengthFactory::makeLength(a,feet))
#define INCH(a) (LengthFactory::makeLength(a,inch))

#define makeLength makeUnit

class LengthFactory: public UnitFactory {
public:
	static Length& makeLength(amountType amt, lengthType lt) {
		return *(new Length(amt, lt));
	}
};