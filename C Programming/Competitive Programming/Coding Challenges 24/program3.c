
/*
Q3. Write a program to check whether a number is divisible by 5 and 11 or not.
Input : 55
Output : Number is Divisible by 5 and 11: 55
*/

#include <stdio.h>

void CheckDivisible(int num)
{
    if (num % 5 == 0 && num % 11 == 0)
    {
        printf("Number is Divisible by 5 and 11: %d\n", num);
    }
    else
    {
        printf("Number is Not Divisible by 5 and 11: %d\n", num);
    }
}

int main()
{
    CheckDivisible(55);

    return 0;
}
