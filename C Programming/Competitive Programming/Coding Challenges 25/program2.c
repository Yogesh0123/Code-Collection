
/*
Q2. Write a program to print numbers from N down to 1 in reverse order.
Input : 10
Output : 10 9 8 7 6 5 4 3 2 1
*/

#include <stdio.h>

void PrintReverse(int iNum)
{
    int iCnt;

    for (iCnt = iNum; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    PrintReverse(10);

    return 0;
}
