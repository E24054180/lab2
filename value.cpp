#include "value.h"
#include <math.h>
	
	
	void value::setstartRA(double RA){RA=1613;}
	void value::setstartRB(double RB){RB=1609;}
	
			 
	
	value::value(double x,double y,double z){
	x=x+32*(y-z);
	}
	
	double value::getRA(){
	return RA;
	}
	double value::getRB(){
	return RB;
	}




