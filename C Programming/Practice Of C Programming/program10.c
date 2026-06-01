#include<stdio.h>

int  CheckEvenOdd(int iNo)
{
     int iRemainder=0;
iRemainder = iNo % 2;

    return iRemainder;
}

int main()
{
    int ivalue=0;
    int iRate=0;

    printf("Enter number : ");
    scanf("%d",&ivalue);

    iRate = CheckEvenOdd(ivalue);

    if (iRate == 0)
    {
        printf("Number is even \n");
    }
    else
    {
        printf("Number is odd \n");
    }

    CheckEvenOdd(ivalue);
    return 0;
}