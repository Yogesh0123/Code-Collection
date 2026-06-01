#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
     int iRemainder=0;

     iRemainder = iNo % 2;

     if (iRemainder ==0)
     {
        return true;
     }
     else
     {
        return false;
     }
}

int main()
{
    int ivalue=0;
    bool bRate= false;

    printf("Enter number to check weather it is Even or Odd: ");
    scanf("%d",&ivalue);

    bRate = CheckEvenOdd(ivalue);

    if (bRate == true)
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