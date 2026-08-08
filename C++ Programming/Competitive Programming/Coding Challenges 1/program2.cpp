/*
Q2.Accept Number of Rows and Number of columns from user and display below pattern.
Input : iRow = 4 iCol = 4
Output :* * * *
        * * * #
        * * # #
        * # # #
*/
#include<iostream>
using namespace std;

void Pattern(int iRow,int iCol)
{
    int i=4;
    int j=0;

    while ( i >= 1)
    {
        j=1;
        while (  j <= iCol )
        {
            if (j<=i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"# ";
            }
            j++;
        }
        cout<<"\n";
        i--;
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    cout<<"Enter The Number of Row: ";
    cin>>iValue1;

    cout<<"Enter The Number of Column: ";
    cin>>iValue2;

    Pattern(iValue1,iValue2);

    return 0;
}