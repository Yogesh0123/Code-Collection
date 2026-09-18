/*
1.Write a program which accept number from user and display its digits in reverse
order.
Input : 2395
Output : 5
9
3
2
Input : 1018
Output : 8
1
0
1
Input : -1018
Output : 8
1
0
1
Input : 9000
Output : 0
0
0
9
*/

#include <iostream>
using namespace std;

void DisplayDigit(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (; iNo != 0; iNo = iNo / 10)
    {
        int iDigit = iNo % 10;

        cout << iDigit << endl;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number : ";
    cin >> iValue;

    DisplayDigit(iValue);

    return 0;
}