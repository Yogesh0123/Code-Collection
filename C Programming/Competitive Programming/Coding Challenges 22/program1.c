/*
1. Write a program to find the sum of digits of a number.
Input : 1234
Output: Sum Of Digits is : 10
*/

#include<stdio.h>

int SumOfDigits(int iNum)
{
    int iSum = 0;

    for(; iNum > 0; iNum = iNum / 10)
    {
        iSum = iSum + (iNum % 10);
    }

    return iSum;
}

int main()
{
    int iNum = 1234;
    int iRet = 0;

    iRet = SumOfDigits(iNum);

    printf("Sum Of Digits is : %d",iRet);

    return 0;
}