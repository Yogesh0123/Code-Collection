/*
4. Accept N numbers from user and accept Range, Display all elements from that range
Input :6
Start:60
End :90
Elements :85 66 3 76 93 88
Output : 85 66 76 88

Input :6
Start:30
End :50
Elements :85 66 3 76 93 88
Output : 0
*/

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt = 0;
    int iFlag =0;

    printf("Result is : ");    
    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt]>=iStart) && (Arr[iCnt]<=iEnd) )
        {
            printf("%d\t",Arr[iCnt]);
            iFlag = 1;
        }
        
    }
    if (iFlag==0)
    {
        printf("0");
    }
//Number found → iFlag = 1 → if(1 == 0) → False
//Number not found → iFlag = 0 → if(0 == 0) → True  
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int iValue1 =0;
    int iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    printf("Enter the starting point: ");
    scanf("%d",&iValue1);

    printf("Enter the ending point: ");
    scanf("%d",&iValue2);

    p = (int*)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements\n",iSize);

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    Range(p,iSize,iValue1,iValue2);

    free(p);
    
}