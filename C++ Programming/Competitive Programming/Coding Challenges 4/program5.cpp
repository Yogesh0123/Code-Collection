/*
5. Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 4 iCol = 4
Output :1 2 3 4
          2 3 4
            3 4
              4
*/

#include<iostream>
using namespace std;

void Pattern(int iRow, int iCol)
{
    int i=1;
    int j=0;

    while (i <= iRow)
    {
        j=1;
        while (j <=iCol)
        {
            if (j<i)
            {
                cout<<"\t";
            }
            else
            {
                cout<<j<<"\t";
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