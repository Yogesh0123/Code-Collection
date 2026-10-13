/*
Q3. Accept number of rows and number of columns from user
and display below pattern.

Input : iRow = 3, iCol = 5
Output:
Output is : 5 4 3 2 1
            5 4 3 2 1
            5 4 3 2 1
*/

#include <iostream>
using namespace std;

void Pattern(int iRow, int iCol)
{
    int i = 0;

    while(i < iRow)
    {
        if(i == 0)
        {
            cout << "Output is : ";
        }
        else
        {
            cout << "            ";
        }

        int j = iCol;

        while(j > 0)
        {
            cout << j << " ";
            j--;
        }

        cout << endl;
        i++;
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