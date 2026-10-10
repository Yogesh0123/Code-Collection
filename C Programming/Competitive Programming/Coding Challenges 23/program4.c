
/*
Q4. Write a program to find the sum of even and odd digits separately in a number.
Input : 123456
Output : Sum of Even Digits: 12
         Sum of Odd Digits: 9
*/

#include <stdio.h>

void SumEvenOddDigits(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit % 2 == 0)
        {
            iEvenSum += iDigit;
        }
        else
        {
            iOddSum += iDigit;
        }

        iNo = iNo / 10;
    }

    printf("Sum of Even Digits: %d\n", iEvenSum);
    printf("Sum of Odd Digits: %d\n", iOddSum);
}

int main()
{
    SumEvenOddDigits(123456);

    return 0;
}
