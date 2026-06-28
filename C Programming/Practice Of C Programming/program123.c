#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
    int i = 0;
    int sum =0;
    for ( i = 0; i < iSize; i++)
    {
        sum=sum+Arr[i];
    }
    return sum;
    
}

int main()
{
int *Brr = NULL;
int iLength = 0,iCnt = 0;
int iRet = 0;

printf("Enter the number of Elemments : ");
scanf("%d",&iLength);

Brr=( int *)malloc(sizeof(int)*iLength);

printf("Enter the elements : ");

for ( iCnt = 0; iCnt < iLength; iCnt++)
{
    scanf("%d",&Brr[iCnt]);
}

iRet = Summation(Brr,iLength);
printf("Summation is: %d\n",iRet);


return 0;
}