/*
Q5. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 4
Output :1   2   3   4
        5   6   7   8
        9   10  11  12
*/

#include<iostream>
using namespace std;

void Pattern(int iRow, int iCol)
{
    int i=0;
    int j=0;
    int iCnt = 1;
    
cout<<"Output is: \n";

    for ( i = 1; i <= iRow; i++)
    {
        for ( j = 1; j <= iCol; j++)
        {
            cout<<iCnt<<"\t";
            iCnt++;
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