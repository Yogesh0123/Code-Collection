
/*
Q2. Write a program to count how many even and odd numbers are present between 1 and N.
Input: 10
Output:
Even Numbers:
2 4 6 8 10
Odd Numbers:
1 3 5 7 9
Even numbers count is : 5
Odd numbers count is : 5
*/

#include <stdio.h>

void CountEvenOddRange(int iNum)
{
    int iCnt;
    int iEvenCount = 0;
    int iOddCount = 0;

    printf("Even Numbers:\n");

    for (iCnt = 2; iCnt <= iNum; iCnt += 2)
    {
        printf("%d\n", iCnt);
        iEvenCount++;
    }

    printf("\nOdd Numbers:\n");

    for (iCnt = 1; iCnt <= iNum; iCnt += 2)
    {
        printf("%d\n", iCnt);
        iOddCount++;
    }

    printf("\nEven numbers count is : %d\n", iEvenCount);
    printf("Odd numbers count is : %d\n", iOddCount);
}

int main()
{
    CountEvenOddRange(10);

    return 0;
}
