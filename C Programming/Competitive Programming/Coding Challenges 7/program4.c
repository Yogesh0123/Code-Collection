#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 1;
    int Odd = 1;

    if (iNo < 0)
    {
        iNo = - iNo;
    }

    while (iCnt <= iNo)
    {
       Odd = Odd * iCnt;
       iCnt = iCnt + 2;
    }
return(Odd);
    
}

int main()
{
    int iValue = 0, iRet =0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d ",iRet);

    return 0;
}