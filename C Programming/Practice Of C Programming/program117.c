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
  int iCnt=0;
  int Brr[ilength] ; 
   
  for ( iCnt=0;iCnt<ilength;iCnt++)
  {
    scanf("%d",Brr[iCnt]);
  }
  
  
   Display(Brr,ilength);

    return 0;
}