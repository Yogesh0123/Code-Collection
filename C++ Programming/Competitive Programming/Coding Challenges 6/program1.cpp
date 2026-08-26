// 1. Accept one number from user and print that number of * on screen.
// Output: Enter number: 5
//         *       *       *       *       *

#include <iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;

    while (iCnt <= iNo)
    {
        cout << "*\t";
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number: ";
    cin >> iValue;

    Display(iValue);

    return 0;
}