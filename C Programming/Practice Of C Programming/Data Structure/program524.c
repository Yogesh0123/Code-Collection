//Input  : 4
//4+3+2+1=10

//Input  : 7
//7+6+5+4+3+2+1=28
#include<stdio.h>

int Summation(int iNO)
{
    int iSum = 0;
    
    while (iNO!=0)
    {
        iSum = iSum+iNO;
        iNO--;
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