#include "UnitLib.h"

const amountType UnitLib::INCH_TO_BASE = 1;
const amountType UnitLib::FEET_TO_INCH = 12;
const amountType UnitLib::YARD_TO_FEET = 3;
const amountType UnitLib::MILE_TO_YARD = 1760;

const amountType UnitLib::lengthRatioToBase[lengthTypeNum] = { 
	INCH_TO_BASE, 
	lengthRatioToBase[inch] * FEET_TO_INCH, 
	lengthRatioToBase[feet] * YARD_TO_FEET, 
	lengthRatioToBase[yard] * MILE_TO_YARD
};

const string UnitLib::lengthName[lengthTypeNum] = {"INCH", "FEET", "YARD", "MILE"};

const amountType UnitLib::TSP_TO_BASE = 1;
const amountType UnitLib::TBSP_TO_TSP = 3;
const amountType UnitLib::OZ_TO_TBSP = 2;

const amountType UnitLib::volumeRatioToBase[volumeTypeNum] = { 
	TSP_TO_BASE, 
	volumeRatioToBase[TSP] * TBSP_TO_TSP, 
	volumeRatioToBase[TBSP] * OZ_TO_TBSP
};
const string UnitLib::volumeName[volumeTypeNum] = {"TSP", "TBSP", "OZ"};