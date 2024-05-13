#include<iostream>
#include<iomanip>
using namespace std;
class Person
{
private :
     string name;
     long int cell;
     string city;
public:
    void getperson()
       {
       cout<<"Enter name : ";
       cin>>name;
       cout<<endl;
        cout<<"Enter Cell number : ";
       cin>>cell;
       cout<<endl;
        cout<<"Enter City : ";
       cin>>city;
       cout<<endl;
       }
    void displayperson()
    {
    cout<<name<<setw(15)<<cell<<setw(10)<<city<<setw(10);
    }
};
class Employee : public Person
{
private :
     string designation;
     long int id;
     int salary;
public:
    void getemployee()
       {
       getperson();
       cout<<"Enter Designation : ";
       cin>>designation;
       cout<<endl;
        cout<<"Enter ID : ";
       cin>>id;
       cout<<endl;
        cout<<"Enter Salary : ";
       cin>>salary;
       cout<<endl;
       }
    void displayemployee()
    {

    displayperson();
    cout<<designation<<setw(10)<<id<<setw(10)<<salary<<setw(10)<<endl;
    }
};  
int main()
{
      Employee e[3];
      int i;
     
     for(i=0;i<3;i++)
      {
      e[i].getemployee();
      }
      cout<<"Name"<<setw(10)<<"Cell number"<<setw(15)<<"City"<<setw(15)<<"Designation"<<setw(15)<<"Emp iD"<<setw(15)<<"Salary"<<endl;
     
      cout<<"______________________________________________________________________________________\n";
      for(i=0;i<3;i++)
      {
      e[i].displayemployee();
      }
}  
