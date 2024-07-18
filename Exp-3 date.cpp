#include<iostream>
#include<conio.h>
using namespace std;
class Date 
{    
    private:
    int day;
    int month;
    int year;
public:
    Date() 
	{
        day = 1;
        month = 1;
        year = 2000;
    }
    void getDate() 
	{
        cout << "enter day"<<endl;
        cin >>day;
        cout<<"enter month"<<endl;
        cin>>month;
        cout<<"enter year"<<endl;
        cin>>year;
        if (day > 31 || month > 12) 
		{
            cout << "Invalid date";
            exit(0);
        }
    }
     void putDate()
     {
     	cout<<day<<"/"<<month<<"/"<<year<<endl;
	 }
    void finalDate() 
	{
        cout << "\n Age is " << year << " year " << month << " month and " << day << " days.";
    }
    Date difference(Date& date1, Date& date2);
    void incrementDate(int days, int months);
};
Date Date::difference(Date& date1, Date& date2) 
{
    Date cal;
    int calculation[24] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	                    ||31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (date1.day > date2.day) 
	{
        date2.day = date2.day + calculation[date2.month - 2];
        cal.day = date2.day - date1.day;
        date2.month = date2.month - 1;
    }
    else
        cal.day = date2.day - date1.day;

    if (date1.month > date2.month) 
	{
        date2.month = date2.month + 12;
        date2.year = date2.year - 1;
        cal.month = date2.month - date1.month;
    }
    else
        cal.month = date2.month - date1.month;

    cal.year = date2.year - date1.year;
    return cal;
}
void Date::incrementDate(int days, int months) 
{
    day += days;
    month += months;
    while (month > 12) 
	{
        month -= 12;
        year++;
    }
    int calculation[24] = { 31,28,31,30,31,30,31,31,30,31,30,31||31,29,31,30,31,30,31,31,30,31,30,31 };
    while (day > calculation[month - 1]) 
	{
        day -= calculation[month - 1];
        month++;

        while (month > 12) 
		{
            month -= 12;
            year++;
        }
    }
}
int main() 
{
    Date date1, date2, calculate;
    date1.getDate();
    date1.putDate();
    date2.getDate();
    date2.putDate();
    calculate = date1.difference(date1, date2);
    calculate.finalDate();

    calculate.incrementDate(1, 1);
    cout << "\n After incrementing of day and month ";
    calculate.finalDate();

    
    return 0;
}
