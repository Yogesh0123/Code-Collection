/*
Q5. Write a program to print all numbers from 1 to N
that are divisible by both 2 and 3.

Input : 30
Output:
6
12
18
24
30
*/

#include <stdio.h>

void printDivisibleBy2and3(int n)
{
    int iCnt;

    for(iCnt = 6; iCnt <= n; iCnt += 6)
    {
        printf("%d\n", iCnt);
    }
}

int main()
{
    printDivisibleBy2and3(30);

    return 0;
}