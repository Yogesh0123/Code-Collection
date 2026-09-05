//3.Write a program which accept number from user and display all its non factors.
//Input : 12
//Output : 5 7 8 9 10 11
//Input : 13
//Output : 2 3 4 5 6 7 8 9 10 11 12
//Input : 10
//Output : 3 4 6 7 8 9

#include <iostream>
using namespace std;

void NonFact(int iNo)
{
    int i = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (i < iNo)
    {
        if (iNo % i == 0)
        {
            i++;
            continue;
        }

        cout << i << "\t";
        i++;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number ";
    cin >> iValue;

    NonFact(iValue);

    return 0;
}