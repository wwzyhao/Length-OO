#include "Length.h"

Length::Length(amountType amt, lengthType lt) {
		kind = length;
		amount = amt;
		unit = lt;
		amountToBase = amount * UnitLib::lengthRatioToBase[lt];
	}

bool Length::operator == (const Length &otherLength) const {
	return amountToBase == otherLength.amountToBase;
}

bool Length::operator != (const Length &otherLength) const {
	return !(*this == otherLength);
}

Length Length::operator + (const Length &otherLength) const{
	return Length(amountToBase + otherLength.amountToBase, inch);
}