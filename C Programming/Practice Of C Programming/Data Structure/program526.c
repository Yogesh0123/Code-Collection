#include<stdio.h>

int Summation(int iNo)
{
    static int iSum = 0;

    if( iNo > 0 )
    {
        iSum = iSum + iNo;
        iNo--;
        Summation(iNo);
    }

    return iSum;
}

int main()
{
    int iVlaue = 0, iRet = 0;

    printf("Enter frequency : \n");
    scanf("%d",&iVlaue);

    iRet = Summation(iVlaue);

    printf("Summation is : %d\n",iRet);

    return 0;
}