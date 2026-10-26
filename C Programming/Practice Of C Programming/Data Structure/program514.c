#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;

    if( i <= iNo )
    {
        printf("Jay Ganesh...%d\n",i);
        i++;
        Display(iNo);      // usnig Recurtion
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