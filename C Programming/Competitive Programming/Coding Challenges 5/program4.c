// 4. Write a program which accepts N from user and print all odd numbers up to N.
// Input : 18
// Output : 1 3 5 7 9 11 13

#include<stdio.h>

void OddDisplay(int iNo)
{
    int i = 0;
    if (iNo<0)
    {
        iNo=-iNo;
    }
    printf("Output is: ");
    for (i = 1; i <= iNo; i++)
    {
    if (i>13)
    {
        break;
    }
      if (i%2!= 0)
      {
        printf("%d\t",i);
      }
      
    }
    
    
}

int main()
{
    int iValue =0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}