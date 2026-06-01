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

    printf("Enter number to check weather it is Even or Odd: ");
    scanf("%d",&ivalue);

    iRate = CheckEvenOdd(ivalue);

    if (iRate == 0)
    {
        printf("%d is even \n",ivalue);
    }
    else
    {
        printf("%d is odd \n",ivalue);
    }

    CheckEvenOdd(ivalue);
    return 0;
}