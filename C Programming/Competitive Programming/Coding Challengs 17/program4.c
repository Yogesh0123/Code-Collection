/*
4. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 4
Output : * # * #
         * # * #
         * # * #
*/

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for ( i = 1; i <= iRow; i++)
    {
        if (i==1)
        {
            printf("Output is : ");
        }
        else
        {
            printf("            ");//12 spaces
        }

        for ( j = 1; j <= iCol; j++)
        {
           if(j % 2 != 0)
            {
                printf("* ");
            }
            else
            {
                printf("# ");
            }
        }
        printf("\n");
    }
    
}
int main()
{
int iValue1 = 0, iValue2 = 0;

printf("Enter Number Of Rows: ");
scanf("%d",&iValue1);

printf("Enter Number Of Columns: ");
scanf("%d",&iValue2);


Pattern(iValue1, iValue2);

return 0;
}
