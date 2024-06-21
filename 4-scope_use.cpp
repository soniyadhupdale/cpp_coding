// local scope is prioritised first than global
// both can be named same
#include"iostream"
using namespace std;

int glo=6;
void sum()
{
	int a;
	cout<<glo;
}
int main()
{
	int glo=9;
	glo=78;
	
	int a=14,b=15;
	float pi=3.14;
	char c='s';
	bool z = true;
	// true represents '0' & false represents '0'
	
    sum();
	cout<<glo<<"\t"<<z;
	
	//cout<<"This is tutorial 4.\nHere, the value of a is : "<<a<<"\nAnd , the value of b is : "<<b;
	//cout<<"\nThe value of pi is : "<<pi;
	//cout<<"\nThe value of c is : "<<c;
	
	return 0;
}
