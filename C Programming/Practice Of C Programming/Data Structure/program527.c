//4
// 4*3*2*1=24
//5
//5*4*3*2*1=120

//Recursion program
#include<stdio.h>

int Factorial(int iNO)
{
    int iMlut = 1;
    
    while (iNO!=0)
    {
        iMlut = iMlut*iNO;
        iNO--;
    }
    return iMlut;
}
int main()
{
  int iVlaue = 0,iRet =0;

    printf("Enter frequency : \n");
    scanf("%d",&iVlaue);

    iRet= Factorial(iVlaue);

    printf("Factorial is: %d\n",iRet);

    return 0;
}