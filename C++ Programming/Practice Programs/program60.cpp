/*
4. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 5 iCol = 5
Output : 1  2  3  4  5
        -1 -2 -3 -4 -5
         1  2  3  4  5
        -1 -2 -3 -4 -5
         1  2  3  4  5
*/

#include<iostream>
using namespace std;

void Pattern(int iRow,int iCol)
{
    int i=1;
    int j=0;

    while (i<=iRow)
     {
        j=1;
        int iCnt =1;

        while (j<=iCol)
        {
            if (i % 2 != 0)
            {
                cout<<iCnt<<"\t";
            }
            else
            {
                 cout<<-iCnt<<"\t";
            }
            iCnt++;
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