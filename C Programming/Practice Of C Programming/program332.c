#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0;

    printf("Enter the number : ");
    scanf("%d", &iNo);

    //Position 28
    iMask = 0x8000000;

    iNo = iNo ^ iMask;
    
    printf("Updated number: %d\n",iNo);

    return 0;
}



