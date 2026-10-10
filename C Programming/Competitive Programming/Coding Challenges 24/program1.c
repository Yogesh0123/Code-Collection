
/*
Q1. Write a program to check whether a given year is a leap year or not.
Input: 2024
Output: This is a Leap Year: 2024
*/

#include <stdio.h>

void CheckLeapYear(int year)
{
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        printf("This is a Leap Year: %d\n", year);
    }
    else
    {
        printf("This is Not Leap Year: %d\n", year);
    }
}

int main()
{
    CheckLeapYear(2024);

    return 0;
}
