
/*
3. Write a program to print all odd numbers up to N.
Input : 20
Output : Odd Numbers 1
         Odd Numbers 3
         Odd Numbers 5
         Odd Numbers 7
         Odd Numbers 9
         Odd Numbers 11
         Odd Numbers 13
         Odd Numbers 15
         Odd Numbers 17
         Odd Numbers 19
*/

#include <stdio.h>

void PrintOddNumbers(int iNo)
{
    int iCnt;

    for (iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        printf("Odd Numbers %d\n", iCnt);
    }
}

int main()
{
    PrintOddNumbers(20);

    return 0;
}
