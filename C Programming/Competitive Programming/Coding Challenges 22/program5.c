/*
5. Write a program to print the multiplication table of a number.
Input: 5
Output: 5 x 1 = 5
        5 x 2 = 10
        5 x 3 = 15
        5 x 4 = 20
        5 x 5 = 25
        5 x 6 = 30
        5 x 7 = 35
        5 x 8 = 40
        5 x 9 = 45
        5 x 10 = 50
*/

#include<stdio.h>

void PrintTable(int iNum)
{
    int iCnt = 10;

    while(iCnt >= 1)
    {
        printf("%d x %d = %d\n",iNum,iCnt,iNum * iCnt);
        iCnt--;
    }
}

int main()
{
    int iValue = 5;

    PrintTable(iValue);

    return 0;
}