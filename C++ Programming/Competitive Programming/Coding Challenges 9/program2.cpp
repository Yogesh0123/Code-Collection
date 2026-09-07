//Q2.program which accept number from user and print numbers till that number
//Input : 8
//Output : 1 2 3 4 5 6 7 8

#include <iostream>
using namespace std;

void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int i = 1;

    cout << "Output is: ";

    while (i <= iNo)
    {
        cout << i << "\t";
        i++;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter Number: ";
    cin >> iValue;

    Display(iValue);

    return 0;
}