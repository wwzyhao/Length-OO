class Feet: public Length {
public:
	Feet(int num) {
		amount = num;
		amountToBase = getRatio(feet);
	};
	bool operator == (Length &otherLength){
		return equal(otherLength);	
	}
	bool operator != (Length &otherLength){
		return !equal(otherLength);		
	}
};