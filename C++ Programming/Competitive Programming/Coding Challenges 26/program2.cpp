/*
Q2. Accept number of rows and number of columns from user
and display below pattern.

Input : iRow = 4, iCol = 3
Output:
1 2 3
1 2 3
1 2 3
1 2 3
*/

#include <iostream>
using namespace std;

void Pattern(int iRow, int iCol)
{
    int i = 1;

    if(iRow <= 0 || iCol <= 0)
    {
        return;
    }

    do
    {
        int j = 1;

        do
        {
            cout << j << " ";
            j++;
        }
        while(j <= iCol);

        cout << endl;
        i++;
    }
    while(i <= iRow);
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter Number of Rows: ";
    cin >> iValue1;

    cout << "Enter Number of Columns: ";
    cin >> iValue2;

    Pattern(iValue1, iValue2);

    return 0;
}