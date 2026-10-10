/*
Q1.Write a program to check whether a number is prime or not.
Input : 11
Output : Prime Number : 11
*/

#include<stdio.h>

void CheckPrime(int iNum)
{
    int i = 2;

    if(iNum <= 1)
    {
        printf("Not Prime Number: %d",iNum);
        return;
    }

    while(i * i <= iNum)
    {
        if(iNum % i == 0)
        {
            printf("Not Prime Number: %d",iNum);
            return;
        }
        i++;
    }

    printf("Prime Number : %d",iNum);
}

int main()
{
    int iValue = 11;

    CheckPrime(iValue);

    return 0;
}