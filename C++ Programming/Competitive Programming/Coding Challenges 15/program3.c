/*
3. Accept N numbers from user and return the difference between largest
and smallest number.
Input : 6
Elements :85 66 3 66 93 88
Output : 90 (93 -3)
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FAlSE 0

typedef int BOOl;

int Difference(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMax = Arr[0];
    int iSmallest = Arr[0];

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }

        if (Arr[iCnt] < iSmallest)
        {
            iSmallest= Arr[iCnt];
        }
    }
    return (iMax-iSmallest);
}
int main()
{
    int iSize=0;
    int iRet = 0;
    int iCnt =0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt + 0);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Difference is %d ",iRet);

    free(p);

    return 0;
    
}