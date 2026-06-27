#include<stdio.h>
//pointer 1st
void CallByValue(int *iPtr)
{
    (*iPtr)++;
}

int main()
{   
    int iValue = 11;

   CallByValue(&iValue); 
   printf("Value after function call :%d \n",iValue);
    return 0;
}