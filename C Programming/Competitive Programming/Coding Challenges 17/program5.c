/*
5. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 4
Output : 1 1 1 1
         2 2 2 2
         3 3 3 3
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    printf("Output is :\n");

    // Outer Loop -> Rows
    for(i = 1; i <= iRow; i++)
    {
        if (i==1)
        {
            printf("Output is : ");
        }
        else
        {
            printf("            ");//12 spaces
        }
        // Inner Loop -> Columns
        for(j = 1; j <= iCol; j++)
        {
            printf("%d ", i);
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number Of Rows : ");
    scanf("%d", &iValue1);

    printf("Enter Number Of Columns : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}