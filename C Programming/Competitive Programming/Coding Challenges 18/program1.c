/*
1. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output :A B C D
        A B C D
        A B C D
        A B C D    
*/
#include<stdio.h>

void Pattern(int iRow ,int iCol)
{
    int i=0;
    int j=0;
printf("Output is : \n");
    for ( i = 1; i <= iRow; i++)
    {
        for ( j = 1; j <= iCol; j++)
        {
            printf("%c\t",'A'+(j-1));
        }
        printf("\n");
    }
}

int main ()
{
    int iValue1=0,iValue2=0;

    printf("Enter Number of Rows: ");
    scanf("%d",&iValue1);
    
    printf("Enter Number of Columns: ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}