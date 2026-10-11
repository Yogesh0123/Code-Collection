
/*
Q3. Write a program to display all factors of a given number.
Input : 12
Output : Factors are :  12
         1
         2
         3
         4
         6
         12
*/

#include <stdio.h>

void DisplayFactors(int iNum)
{
    int iCnt;

    printf("Factors are :  %d\n", iNum);

    for (iCnt = 1; iCnt <= iNum; iCnt++)
    {
        if (iNum % iCnt == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    DisplayFactors(12);

    return 0;
}
