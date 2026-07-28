/*
5. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output :1 2 3 4
        2 3 4 5
        3 4 5 6
        4 5 6 7
*/

#include<iostream>
using namespace std;

void Pattern(int iRow,int iCol)
{
    int i =1;
    int j =0;

    while (i<=iRow)
    {
        j=1;
        int iCnt=i;

        while (j<=iCol)
        {
            cout<<iCnt<<"\t";
            iCnt=iCnt+1;
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