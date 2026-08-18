/*
Q. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 5
Output :A A A A A
        B B B B B
        C C C C C
*/

#include<iostream>
using namespace std;

void Pattern(int iRow, int iCol)
{
    int i=0;
    int j=0;

    for ( i = 1; i <= iRow; i++)
    {
            for ( j = 1; j <=iCol; j++)
            {
                cout<<char('A'+(i-1))<<"\t";
            }
        cout<<"\n";
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter Number of Rows : ";
    cin>>iValue1;

    cout<<"Enter Number of Columns : ";
    cin>>iValue2;

    Pattern(iValue1, iValue2);

    return 0;
}