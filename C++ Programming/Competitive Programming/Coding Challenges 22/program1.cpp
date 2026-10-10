
/*
Q1. Write a program to check whether a given year is a leap year or not.
Input: 2024
Output: This is a Leap Year: 2024
*/

#include <iostream>
using namespace std;

class Logic
{
public:
    void CheckLeapYear(int year)
    {
        int iDays = 365;

        if (year % 400 == 0)
        {
            iDays = 366;
        }
        else if (year % 100 == 0)
        {
            iDays = 365;
        }
        else if (year % 4 == 0)
        {
            iDays = 366;
        }

        if (iDays == 366)
        {
            cout << "This is a Leap Year: " << year << endl;
        }
        else
        {
            cout << "This is Not Leap Year: " << year << endl;
        }
    }
};

int main()
{
    Logic obj;
    obj.CheckLeapYear(2024);

    return 0;
}
