// 3.Write a program to find factorial of given number.
// Input : 5
// Output : 120 (5 * 4 * 3 * 2 * 1)
// Input : -5
// Output : 120 (5 * 4 * 3 * 2 * 1)
// Input : 4
// Output : 24 (4 * 3 * 2 * 1)

#include<stdio.h>

int Factorial(int iNo)
{
    int i = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    i = iNo;

    while(i >= 1)
    {
        iFact = iFact * i;
        i--;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    int i = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    iRet = Factorial(iValue);

    printf("Factorial of number is : %d (",iRet);

    i = iValue;

    while(i >= 1)
    {
        printf("%d",i);

        if(i > 1)
        {
            printf(" * ");
        }

        i--;
    }

    printf(")");

    return 0;
}