#include<stdio.h>

typedef unsigned int UINT;

//Position 4
UINT OffBit(UINT iNo,UINT iPos)
{
    UINT iMask = 0xFFFFFFF7;
    UINT iResult = 0;

    if (iPos<1 || iPos > 32)
    {
        printf("Invalid Bit Position\n");
        return iNo;
    }
    
    iMask= iMask << (iPos-1);

    iResult = iNo ^ iMask; //possion toggle

    return iResult;

}

int main()
{
   UINT iValue =0, iRet =0, iLocation =0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    printf("Enter the bit Position :\n");
    scanf("%d",&iLocation);

    iRet = OffBit(iValue,iLocation);

    printf("Updated number is %d\n",iRet);
    return 0;
}



