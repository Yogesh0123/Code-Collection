
/*
5. Write a program to find the smallest digit in a given number.
Input : 45287
Output : Smallest number is : 2
*/

#include <stdio.h>

void FindSmallestDigit(int iNum)
{
    int iDigit = 0;
    int iSmallest = 9;

    while (iNum != 0)
    {
        iDigit = iNum % 10;

        if (iDigit < iSmallest)
        {
            iSmallest = iDigit;
        }

        iNum = iNum / 10;
    }

    printf("Smallest number is : %d\n", iSmallest);
}

int main()
{
    FindSmallestDigit(45287);

    return 0;
}
