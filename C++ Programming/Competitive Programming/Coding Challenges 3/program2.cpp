/*
2. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4  iCol = 4
Output :2 4 6 8
        1 3 5 7
        2 4 6 8
        1 3 5 7             
*/
#include<iostream>
using namespace std;

void Pattern(int iRow,int iCol)
{
    int i =1;
    int j= 1;
    int iCnt = 1;

    while (i<=iRow)
    {
        j=1;

        if (i % 2 != 0)
        {
            iCnt = 2;
        }
        else
        {
            iCnt =1;
        }

        while (j<=iCol)
        {
            cout<<iCnt<<"\t";
            iCnt= iCnt+2;

            j++;
        }
        cout<<"\n";
         i++;
    }
    
}

int main()
{
int iValue1=0, iValue2=0,iRet=0;

cout<<"Enter the number of Rows : ";
cin>>iValue1;

cout<<"Enter the number of Columns : ";
cin>>iValue2;

Pattern(iValue1,iValue2);

return 0;
}