/*
Q3. Accept number of rows and number of columns from user and display below
pattern.

Input : iRow = 5 iCol = 5
Output :$ * * * *
        * $ * * *
        * * $ * *
        * * * $ *
        * * * * $
*/
#include<iostream>
using namespace std;

void Pattern(int iRow,int iCol)
{
    int i=1;
    int j=0;

    while ( i <= iRow )
    {
        j = 1;

        while (j <= iCol)
        {
            if (j-i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"$ ";
            }
            j++;
        }
        cout<<"\n";
        i++;
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