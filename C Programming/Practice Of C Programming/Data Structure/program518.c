#include<stdio.h>

void Display(int iNo)
{

    if( iNo != 0 )
    {
        printf("Jay Ganesh...%d\n",iNo);
        Display(iNo--);//ISSUE
    }
}

int main()
{
  int iVlaue = 0;

    printf("Enter frequency : \n");
    scanf("%d",&iVlaue);

    Display(iVlaue);

    printf("End of main\n");

    return 0;
}