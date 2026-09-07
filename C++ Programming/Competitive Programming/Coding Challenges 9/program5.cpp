// 5. Write a program which accept N and print first 5 multiples of N.
// Input : 4
// Output : 4 8 12 16 20

#include <iostream>
using namespace std;

void MultipleDisplay(int iNo)
{
    int i = 1;
    int iMultiple = iNo;

    if (iNo < 0)
    {
        iNo = -iNo;
        iMultiple = iNo;
    }

    while (i <= 5)
    {
        cout << iMultiple << "\t";
        iMultiple = iMultiple + iNo;
        i++;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter Number : ";
    cin >> iValue;

    MultipleDisplay(iValue);

    return 0;
}