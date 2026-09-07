// 4. Write a program which accepts N from user and print all odd numbers up to N.
// Input : 18
// Output : 1 3 5 7 9 11 13

#include <iostream>
using namespace std;

void OddDisplay(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int i = 1;

    cout << "Output is: ";

    while (i <= iNo && i <= 13)
    {
        cout << i << "\t";
        i = i + 2;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter Number : ";
    cin >> iValue;

    OddDisplay(iValue);

    return 0;
}