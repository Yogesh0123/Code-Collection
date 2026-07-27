/*
2. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4  iCol = 4
Output :2 4 6 8
        1 3 5 7
        2 4 6 8
        1 3 5 7             
*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i =0;
    int j =0;
    int iCnt=1;

    for ( i = 1; i <=iRow; i++)
    {
        if (i % 2 !=0)
        {
            iCnt=2;
        }
        else
        {
            iCnt=1;
        }

        for (j = 1; j <=iCol; j++)
        {
            printf("%d\t",iCnt);
            iCnt=iCnt+2;
        }
        printf("\n");
    }
    
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter the number of Rows: ");
    scanf("%d",&iValue1);

    printf("Enter the number of Columns: ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
}