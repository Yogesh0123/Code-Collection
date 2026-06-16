//Input : 5
//output: 1 2 3 4 5 
#include<stdio.h>

int main()
{
    int iCnt =0;

    iCnt = 1;

    do
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
    while( iCnt <=5);
    
    return 0;
}

