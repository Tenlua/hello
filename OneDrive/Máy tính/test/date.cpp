#include "Date.h"
#include <iostream>
using namespace std;
Date::Date(int month, int day, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
    if (!IsVaidDate()) cout << "InVaid Date\n";
}
Date::~Date() {}
void Date::Print()
{
    cout << day << "/" << month << "/" << year << endl;
}
bool Date::IsVaidDate()
{
    if (day < 1 || day > 31) return false;
    if (month < 1 || month > 12) return false;
    if (year < 1900) return false;
    if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            return (day <= 29);
        }
        else return (day <= 28);
    }
    if (month == 4 || month == 6 || month == 9 || month == 11) return (day <= 30);
    else return (day <= 31);
}