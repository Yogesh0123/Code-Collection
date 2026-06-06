#include<stdio.h>

void Number(int iNo)
{
    if (iNo<0)
    {
        printf("\n Invalid Number: %d \n",iNo);
       
    }
    else if (iNo<50)
    {
        printf("\nSmall Number: %d \n",iNo);
    }
    else if (iNo > 50 && iNo <100)
    {
        printf("\nMedium Number : %d \n",iNo);
    }
    else
    {
        printf("\nLarge Number: %d \n",iNo);
    }
}

int main()
{
    int iValue =0;

    printf("\nEnter number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}