/*
5. Accept N numbers from user and display summation of digits of each number.
Input :6
Elements :8225 665 3 76 953 858
Output : 17 17 3 13 17 21
*/
#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int iLength)
{
    int iCnt =0;
    int iNo =0;
    int iDigit =0;
    int iSum= 0;

    printf("Result is: ");

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
       iNo = Arr[iCnt];
       iSum =0;

       while (iNo!=0)
       {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
       }
        printf("%d ",iSum);
    }
    
}
int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of Elements: ");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize * sizeof(int));

    if (p==NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }
    
    printf("Enter %d elements\n",iSize);

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ",iCnt+0);
        scanf("%d",&p[iCnt]);
    }

    DigitsSum(p,iSize);
    free(p);
}