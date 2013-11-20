#include "Length.h"

const amountType Length::INCH_TO_BASE = 1;
const amountType Length::FEET_TO_INCH = 12;
const amountType Length::YARD_TO_FEET = 3;
const amountType Length::MILE_TO_YARD = 1760;

const amountType Length::ratioToBase[typeNum] = { 
	INCH_TO_BASE, 
	ratioToBase[inch] * FEET_TO_INCH, 
	ratioToBase[feet] * YARD_TO_FEET, 
	ratioToBase[yard] * MILE_TO_YARD
};

Length::Length(amountType amt, lengthType lt): 
	amount(amt), unit(lt), amountToBase(amount * ratioToBase[lt]) {}

Length& Length::getLength(amountType amt, lengthType lt) {
	return *(new Length(amt, lt));
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