#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
     if (iNo % 2 ==0)
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

    if (bRate)
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