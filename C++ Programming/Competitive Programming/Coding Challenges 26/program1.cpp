/*
Q1. Accept number of rows and number of columns from user
and display below pattern.

Input : iRow = 4, iCol = 3
Output:
* * *
* * *
* * *
* * *
*/

#include <iostream>
using namespace std;

void Pattern(int iRow, int iCol)
{
    for(int i = 0; i < iRow * iCol; i++)
    {
        cout << "* ";

        if((i + 1) % iCol == 0)
        {
            cout << endl;
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter Number Of Rows: ";
    cin >> iValue1;

    cout << "Enter Number Of Columns: ";
    cin >> iValue2;

    Pattern(iValue1, iValue2);

    return 0;
}