#include "Unit.h"

class Volume: public Unit{
public:
	bool operator == (const Volume &otherVolume) const;
	bool operator != (const Volume &otherVolume) const;
	Volume operator + (const Volume &otherVolume) const;

private:
	friend class VolumeFactory;

	Volume(amountType, volumeType);
};