#include<stdio.h>

void Display(int iNo)
{
    auto int i = 0;

    i = 1;
    while( i <= iNo )
    {
        printf("Jay Ganesh...\n");
        i++;
    }
}

int main()
{   
    int iVlaue = 0;

    printf("Enter frequency : \n");
    scanf("%d",&iVlaue);

    Display(iVlaue);

    return 0;
}