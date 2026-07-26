/*
Q. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output :A B C D
        A B C D
        A B C D
        A B C D    
*/

#include<iostream>
using namespace std;

void Pattern(int iRow ,int iCol)
{
    int i=0;
    int j=0;

cout<<"Output is : \n";

    for ( i = 1; i <= iRow; i++)
    {
        for ( j = 1; j <= iCol; j++)
        {
            cout<<char('A'+(j-1))<<"\t";
        }
        cout<<"\n";
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    cout<<"Enter Number of Rows: ";
    cin >>iValue1;
    
    printf("Enter Number of Columns: ");
    cin>>iValue2;

    Pattern(iValue1,iValue2);

    return 0;
}