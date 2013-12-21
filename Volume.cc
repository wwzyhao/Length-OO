#include "Volume.h"

Volume::Volume(amountType amt, volumeType lt) {
		kind = volume;
		amount = amt;
		unit = lt;
		amountToBase = amount * UnitLib::volumeRatioToBase[lt];
	}

bool Volume::operator == (const Volume &otherVolume) const {
	return amountToBase == otherVolume.amountToBase;
}

bool Volume::operator != (const Volume &otherVolume) const {
	return !(*this == otherVolume);
}

Volume Volume::operator + (const Volume &otherVolume) const{
	return Volume(amountToBase + otherVolume.amountToBase, TSP);
}