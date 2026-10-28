// 5678
// Summation is : 26

#include<stdio.h>

int Summation(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        Summation(iNo / 10);
    }

    return iSum;
}

int main()
{
    int iVlaue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iVlaue);

    iRet = Summation(iVlaue);

    printf("Summation is : %d\n",iRet);

    return 0;
}