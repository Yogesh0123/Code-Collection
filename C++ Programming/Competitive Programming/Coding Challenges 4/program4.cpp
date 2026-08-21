/*
4. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 6 iCol = 6
Output :* * * * * *
        * *       *
        *   *     *
        *     *   *
        *       * *
        * * * * * *
*/
#include<iostream>
using namespace std;
void Pattern(int iRow, int iCol)
{
    int i=1;
    int j=0;

    while (i<=iRow)
    {
        j=1;
       while (j <= iCol)
       {
         if (i==1||i==iRow)
         {
            cout<<"*\t";
         }
         else if (j==1||j==i||j==iCol)
         {
            cout<<"*\t";
         }
         else
         {
            cout<<" \t";
         }
         j++;
       }
       cout<<"\n";
       i++;
    }
}
int main()
{
int iValue1 = 0;
int iValue2 = 0;
cout<<"Enter number of rows : ";
cin>>iValue1;

cout<<"Enter number of colums : ";
cin>>iValue2;

Pattern(iValue1, iValue2);

return 0;
}