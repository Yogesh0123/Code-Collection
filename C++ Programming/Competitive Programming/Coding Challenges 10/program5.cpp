// 5. Write a program which accept number from user and display its table in reverse
// order.
// Input : 2
// Output : 20 18 16 14 12 10 8 6 4 2
// Input : 5
// Output : 50 45 40 35 30 25 20 15 10 5
// Input : -5
// Output : 50 45 40 35 30 25 20 15 10 5

#include <iostream>
using namespace std;

void TableRev(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iMultiple = iNo * 10;

    cout << "Output is: ";

    for (int i = 10; i >= 1; i--)
    {
        cout << " " << iMultiple << "\t";
        iMultiple = iMultiple - iNo;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number : ";
    cin >> iValue;

    TableRev(iValue);

    return 0;
}