// 5678
// 8 7 6 5
#include<stdio.h>

void Display(int iNo)
{
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\t",iDigit);
        iNo = iNo / 10;
        Display(iNo);
    }
}

int main()
{
    int iVlaue = 0;

    printf("Enter number : \n");
    scanf("%d",&iVlaue);

    Display(iVlaue);

    return 0;
}