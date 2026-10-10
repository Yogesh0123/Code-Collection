
/*
4. Write a program to find the largest digit in a given number.
Input : 83429
Output : Largest number is : 9
*/

#include <stdio.h>

void FindLargestDigit(int iNum)
{
    int iLargest = 0;
    int iDigit = 0;

    while (iNum != 0)
    {
        iDigit = iNum % 10;

        if (iDigit > iLargest)
        {
            iLargest = iDigit;
        }

        iNum = iNum / 10;
    }

    printf("Largest number is : %d\n", iLargest);
}

int main()
{
    FindLargestDigit(83429);

    return 0;
}
