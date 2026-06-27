#include<stdio.h>

void CallByValue(int iNo)
{
    iNo++;
}

int main()
{   
    int iValue = 11;

   CallByValue(iValue); //CallByValue(11); value going in ino box
   printf("Value after function call :%d \n",iValue);
    return 0;
}