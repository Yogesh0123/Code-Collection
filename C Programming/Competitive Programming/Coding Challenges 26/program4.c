
/*
4. Write a program to count total number of factors of a given number.
Input : 20
Output : Factors of : 20
         1
         2
         4
         5
         10
         20
         Total Factors are : 6
*/

#include <stdio.h>

void CountFactors(int iNum)
{
    int iCnt;
    int iCount = 0;

    printf("Factors of : %d\n", iNum);

    for (iCnt = 1; iCnt <= iNum; iCnt++)
    {
        if (iNum % iCnt == 0)
        {
            printf("%d\n", iCnt);
            iCount++;
        }
    }

    printf("Total Factors are : %d\n", iCount);
}

int main()
{
    CountFactors(20);

    return 0;
}
