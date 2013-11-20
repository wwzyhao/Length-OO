#define typeNum 4

enum lengthType {inch, feet, yard, mile};

class Unit {
public:
	friend class Length;
	
private:
	static const int ratioToBase[typeNum];
	static const int INCH_TO_BASE;
	static const int FEET_TO_INCH;
	static const int YARD_TO_FEET;
	static const int MILE_TO_YARD;
};