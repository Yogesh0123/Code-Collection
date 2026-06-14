// 5. Write a program which returns difference between Even factorial and odd factorial of given number.
// Input : 5
// Output : -7 (8 - 15)
// Input : -5
// Output : -7 (8 - 15)
// Input : 10
// Output : 2895 (3840 - 945)

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int Even = 1;
    int Odd= 1;

    if (iNo<0)
    {
        iNo = -iNo;
    }

    iCnt = 2;

    while (iCnt<= iNo) //(2<=iNo is 5 (True)) ## (4<=iNo is 5(True)) ## (10<=iNo is 5 (false)) ## Loop Stop
    {
        Even = Even * iCnt;//(1*2=2(Even value is 2)) ## (2*4=8 (Even value is 8))
        iCnt = iCnt + 2; //(2+2=4(iCnt value is 4)) ## (8+2=10(iCnt value is 10))
    } 

    iCnt= 1;
    while (Odd<= iNo) //(1<=iNo is 5 (True)) ## (3<=iNo is 5 (True)) ## (5<=iNo is 5 (True)) ## (17<=iNo is 5 (False)) ## Loop Stop
    {
        Odd = Odd * iCnt; //(1*1=1(Odd value is 1)) ## (1*3=3 (Odd value is 3)) ## (3*5=15 (Odd value is 15))
        iCnt = iCnt+ 2; //(1+2=3(iCnt value is 3)) ## (3+2=5 (iCnt value is 5)) ##  (15+2=17 (iCnt value is 17))
    }

    return(Even - Odd); // Output is (8-15=-7)
    
    
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("Factorial difference is %d",iRet);
    return 0;
}