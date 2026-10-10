
/*
Q3. Write a program to check whether a number is a perfect number or not.
Input : 6
Output : 6 is a Perfect Number
*/

#include <stdio.h>

void CheckPerfect(int num)
{
    int i;
    int sum = 0;

    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    if (sum == num && num > 0)
    {
        printf("%d is a Perfect Number\n", num);
    }
    else
    {
        printf("%d is not a Perfect Number\n", num);
    }
}

int main()
{
    CheckPerfect(6);

    return 0;
}
