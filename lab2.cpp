#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<math.h>
#include<unistd.h>
using namespace std;
int main(){
double EA,EB;
double SA,SB;
double RA,RB;
int i ,j,k;

RA=1613;
RB=1609;

string name,headline;

ifstream inFile("file.in", ios::in);
ofstream outFile("file.out",ios::out);

	if(!inFile) {
	cerr << "Failed opening" << endl;
	exit(1);
	}
	getline(inFile, headline);
	cout<<headline<<endl;
	outFile<<"32\t1613\t1609\n";
	while(inFile>>SA){
	EA=1/(1+pow(10,(RB-RA)/400));
        EB=1/(1+pow(10,(RA-RB)/400));
        SB=1-SA;
        RA=RA+32*(SA-EA);
        RB=RB+32*(SB-EB);
        i=RA+0.5;
        j=RB+0.5;
        RA=i;
        RB=j;
	 outFile <<SA <<"\t" << RA<<"\t"<<RB<<endl;

	
	}	
	
if(!outFile){
        cerr<<"Failed opening"<<endl;
        exit(1);}
cout<<"Enter SA each line.\n"
    << "EOF to finish.\n" << "? ";

      	
	

	

return 0;}







