#include<iostream>
#include<math.h>
using namespace std;
class value{
	public:
	 
	value(double x,double y,double z);
	void setstartRA(double RA);
	void setstartRB(double RB);
		
	double getRA();
	double getRB();

	private:
	int k ;
	double RA;
	double RB;
	
	};	

