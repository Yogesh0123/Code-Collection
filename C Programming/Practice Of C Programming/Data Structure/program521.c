//Input  : 4
//1+2+3+4=10

//Input  : 7
//1+2+3+4+5+6+7=28
#include<stdio.h>

int Summation(int iNO)
{
    int iSum = 0;
    int i =0;

    for(i=1;i<=iNO;i++)
    {
        iSum = iSum+i;
    }
    return iSum;
}
int main()
{
  int iVlaue = 0,iRet =0;

    printf("Enter frequency : \n");
    scanf("%d",&iVlaue);

    iRet= Summation(iVlaue);

    printf("Summation is: %d\n",iRet);

    return 0;
}