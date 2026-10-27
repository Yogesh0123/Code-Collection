//4
// 4*3*2*1=24
//5
//5*4*3*2*1=120

#include<stdio.h>

typedef unsigned  long int ULONG;
 ULONG Factorial(int iNO)
{
    static ULONG iMlut = 1;
    
    if (iNO!=0)
    {
        iMlut = iMlut*iNO;
        iNO--;
        Factorial(iNO);
    }
    return iMlut;
}
int main()
{
  int iVlaue = 0;
  ULONG iRet =0;

    printf("Enter frequency : \n");
    scanf("%d",&iVlaue);

    iRet= Factorial(iVlaue);

    printf("Factorial is: %lu\n",iRet);

    return 0;
}