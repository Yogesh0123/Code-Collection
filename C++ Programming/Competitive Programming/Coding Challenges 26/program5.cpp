/*
Q5. Accept number of rows and number of columns from user
and display below pattern.

Input : iRow = 3, iCol = 4
Output:
Output is : 1 1 1 1
            2 2 2 2
            3 3 3 3
*/

#include <iostream>
using namespace std;

void Pattern(int iRow, int iCol)
{
    cout << "Output is :" << endl;

    int i = 1;

    while(i <= iRow)
    {
        if(i == 1)
            cout << "Output is : ";
        else
            cout << "            ";

        for(int j = 0; j < iCol; j++)
        {
            cout << i << " ";
        }

        cout << endl;
        i++;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter Number Of Rows : ";
    cin >> iValue1;

    cout << "Enter Number Of Columns : ";
    cin >> iValue2;

    Pattern(iValue1, iValue2);

    return 0;
}