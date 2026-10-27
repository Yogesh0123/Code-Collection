#include<stdio.h>

int Summation(int iNo)
{
    static int iSum = 0;
    static int i = 1;

    if( i <= iNo)
    {
        iSum = iSum + i;
        i++;
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