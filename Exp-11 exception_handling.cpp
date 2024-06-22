#include<iostream>
#include<string>
using namespace std;

class Date 
{
private:
    int day;
    int month;
    int year;

public:
    Date() : day(1), month(1), year(2000) {} 
    
    void setDate(int d, int m, int y) 
	{
        if (d <= 0 || d > 31 || m <= 0 || m > 12) 
		{
            throw "Invalid date";
        }
        day = d;
        month = m;
        year = y;
    }

    void printDate() 
	{
        cout << "Date " << day << "/" << month << "/" << year << endl;
    }
};

class Person 
{
private:
    string personName;
    string personID;

public:
    Person() : personName(""), personID("") {}
    
    void setName(const string& name) 
	{
        if (name.empty()) 
		{
            throw "error";
        }
        personName = name;
    }

    void setID(const string& id) 
	{
        personID = id;
    }

    void printInfo() 
	{
        cout << "Name " << personName << ", ID " << personID << endl;
    }
};

int main() 
{    
    Date myDate;
    try 
	{
        myDate.setDate(31, 5, 2024);
        myDate.printDate();
    } 
	catch (const char* e) 
	{
         cout<< "Date Error " << e << endl;
    }

    Person myPerson;
    try 
	{
        myPerson.setName("");
        myPerson.setID("12345");
        myPerson.printInfo();

    } catch (const char* e) 
	{
        cout<< "invalid " << e << endl;
    }
    
    return 0;
}

