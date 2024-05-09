#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	int i,n;
	string name;
	float number, gross_amount, amount_donated, net_sale;
	cout<<"enter number of tickets\n"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Movie Name......................"<<setw(2);
		cin>>name;
		cout<<"Number of Tickets Sold.........."<<setw(2);
		cin>>number;
		cout<<"Gross Amount...................."<<setw(2);
		cin>>gross_amount;
		cout<<"Amount Donated.................."<<setw(2);
		cin>>amount_donated;
		cout<<"Net Sale........................"<<setw(2);
		cin>>net_sale;
		cout<<endl;	
	}
	
}
