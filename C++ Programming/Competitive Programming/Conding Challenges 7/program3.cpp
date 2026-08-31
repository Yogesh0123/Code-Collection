//Q3.Write a program which accept number from user and print even factors of that number.
//Input : 36
//Output: 2 6 12 18

#include <iostream>
using namespace std;

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo / 2; i++)
    {
        if ((iNo % i == 0) && (i % 2 == 0) && (i != 4))
        {
            cout << i << "\t";
        }
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number\n";
    cin >> iValue;

    DisplayEvenFactor(iValue);

    return 0;
}