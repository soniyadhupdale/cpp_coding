#include<iostream>
#include<iomanip>
using namespace std;
class number
{
	public:int num1;
	       int num2,sum;
	public:void getdata();
	       void putdata();
};
void number :: getdata()
{
	cout<<"enter two numbers :"<<endl;
	cin>>num1>>num2;
}
void number :: putdata()
{
	sum=num1+num2;
	cout<<"sum of num1 and num2 ="<<sum;
}
int main()
{
	number n;
	n.getdata();
	n.putdata();
}

