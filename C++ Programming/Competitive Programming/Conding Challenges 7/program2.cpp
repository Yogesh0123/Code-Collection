//Q2.Write a program which accept number from user and print even factors of that number.
//Input : 24
//Output: 1 2 4 6 8 12

#include <iostream>
using namespace std;

void DisplayFactor(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo / 2; i++)
    {
        if ((iNo % i == 0) && ((i % 2 == 0) || (i == 1)))
        {
            cout << i << "\t";
        }
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number: ";
    cin >> iValue;

    DisplayFactor(iValue);

    return 0;
}