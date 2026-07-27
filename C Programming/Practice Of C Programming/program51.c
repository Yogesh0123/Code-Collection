/*
Q1. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output :1 2 3 4
        5 6 7 8
        9 1 2 3
        4 5 6 7
*/

#include<stdio.h>

void Pattern(int iRow,int jCol)
{
    int i=0;
    int j=0;
    int iCnt=1;

    for ( i = 1; i <= iRow; i++)
    {
        for ( j = 1; j <= jCol ; j++)
        {
            printf("%d\t",iCnt);
            iCnt++;
            if (iCnt > 9)
            {
                iCnt=1;
            }
            
        }
    printf("\n");
    }
    
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of Columns : ");
    scanf("%d",&iValue2);

    Pattern (iValue1,iValue2);

    return 0;
}