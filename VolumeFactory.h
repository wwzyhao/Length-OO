#include "Volume.h"

#define TSP(a) (VolumeFactory::makeVolume(a,TSP))
#define TBSP(a) (VolumeFactory::makeVolume(a,TBSP))
#define Oz(a) (VolumeFactory::makeVolume(a,Oz))

#define makeVolume makeUnit

class VolumeFactory: public UnitFactory {
public:
	static Volume& makeVolume(amountType amt, volumeType lt) {
		return *(new Volume(amt, lt));
	}
};