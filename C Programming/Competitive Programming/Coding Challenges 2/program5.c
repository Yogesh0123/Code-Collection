//5.Accept number from user and check whether number is even or odd.
//Output:  Enter Number : 11
//         Number is odd
//              &
//         Enter Number : 2
//         Number is Even

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    //Logic
    if ((iNo % 2)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

int main()
{
    int iValue =0 ;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet=ChkEven(iValue);

    //Display result
    if (bRet == TRUE)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is odd");
    }
    
}
