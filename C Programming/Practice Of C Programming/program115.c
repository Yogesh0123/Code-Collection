#include<stdio.h>

void Display(int Arr[],int iSize)
{
    int iCnt =0;
   
   for ( iCnt = 0; iCnt < iSize; iCnt++)
   {
     printf("%d\n",Arr[iCnt]);
   }
   
}

int main()
{  
  int ilength =4;
  int Brr[ilength] = {10,20,30,40}; //Error

   Display(Brr,ilength);

    return 0;
}