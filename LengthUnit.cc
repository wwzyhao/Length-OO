#include "LengthUnit.h"

const amountType LengthUnit::INCH_TO_BASE = 1;
const amountType LengthUnit::FEET_TO_INCH = 12;
const amountType LengthUnit::YARD_TO_FEET = 3;
const amountType LengthUnit::MILE_TO_YARD = 1760;

const amountType LengthUnit::ratioToBase[typeNum] = { 
	INCH_TO_BASE, 
	ratioToBase[inch] * FEET_TO_INCH, 
	ratioToBase[feet] * YARD_TO_FEET, 
	ratioToBase[yard] * MILE_TO_YARD
};