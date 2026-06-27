#include<stdio.h>

int Summation(int Arr[],int iSize)
{
   int iCnt =0;
    int iSum =0;
   
   for ( iCnt = 0; iCnt < iSize; iCnt++)
   {
     iSum= iSum+Arr[iCnt];
   }
   return iSum;
   
}

int main()
{  
  int ilength =4;
  int iCnt=0;
  int iRet=0;

  int Brr[ilength] ; 

  printf("Enter the elements: \n");
   
  for ( iCnt=0;iCnt<ilength;iCnt++)
  {
    scanf("%d",&Brr[iCnt]);
  }
  
  
  iRet = Summation(Brr,ilength);
  printf("Addition of all elemets : %d\n",iRet);

    return 0;
}