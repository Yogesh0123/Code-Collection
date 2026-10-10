
/*
Q4. Write a program to print each digit of a number separately.
Input : 9876
Output: Current Digit : 6
        Current Digit : 7
        Current Digit : 8
        Current Digit : 9
*/

#include <stdio.h>

void PrintDigits(int num)
{
    int iDigit = 0;

    while (num != 0)
    {
        iDigit = num % 10;
        printf("Current Digit : %d\n", iDigit);
        num = num / 10;
    }
}

int main()
{
    PrintDigits(9876);

    return 0;
}
