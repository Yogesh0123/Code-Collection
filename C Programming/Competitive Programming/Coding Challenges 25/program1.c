
/*
1. Write a program to find the sum of all even numbers up to N.
Input: 10
Output: Sum is : 30
*/

#include <stdio.h>

void SumEvenNumbers(int iNum)
{
    int iCnt;
    int iSum = 0;

    for (iCnt = 2; iCnt <= iNum; iCnt += 2)
    {
        iSum += iCnt;
    }

    printf("Sum is : %d\n", iSum);
}

int main()
{
    SumEvenNumbers(10);

    return 0;
}
