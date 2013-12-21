#ifndef _UNIT_H_
#define _UNIT_H_

#include "UnitLib.h"

class Unit {
protected:
	amountType amount, amountToBase;
	unitType unit, kind;
	friend class Test;
};

#endif