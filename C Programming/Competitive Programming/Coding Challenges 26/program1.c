
/*
Q1. Write a program to calculate the product of digits of a number.
Input : 234
Output : Answer is : 24
*/

#include <stdio.h>

void ProductOfDigits(int iNum)
{
    int iDigits = 0;
    int iProduct = 1;

    while (iNum != 0)
    {
        iDigits = iNum % 10;
        iProduct = iProduct * iDigits;
        iNum = iNum / 10;
    }

    printf("Answer is : %d\n", iProduct);
}

int main()
{
    int iNum = 234;
    ProductOfDigits(iNum);

    return 0;
}
