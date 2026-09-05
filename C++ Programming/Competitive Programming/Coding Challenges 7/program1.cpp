//Q1.Write a program which accept one number from user and print that number of even numbers on screen.

//Input : 7

//Output: 2 4 6 8 10 12 14

#include <iostream>
using namespace std;

void PrintEven(int iNo)
{
    int iCnt = 0;

    if (iNo <= 0)
    {
        return;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout << iCnt * 2 << "\t";
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number: ";
    cin >> iValue;

    PrintEven(iValue);

    return 0;
}