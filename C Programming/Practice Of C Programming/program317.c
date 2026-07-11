//Accept number from user check weather 7 bit on/off
#include<stdio.h>

typedef unsigned int UINT;
int main()
{
        UINT  iNo = 0;
        UINT  iPos= 0;
        UINT  iMask = 0x1;
        UINT  iAns = 0;

        printf("Enter Number: \n");
        scanf("%d",&iNo);

         printf("Enter Position: \n");
        scanf("%d",&iPos);

        iMask= iMask<<(iPos-1);

        iAns = iNo & iMask;

        if (iAns == iMask)
        {
            printf("Seventh bit is ON\n");
        }
        else
        {
            printf("Seventh bit is OFF\n");
        }
        
    return 0;
}