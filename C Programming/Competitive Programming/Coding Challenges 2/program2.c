//2.Accept one number from user and print that number of * on screen.
//Output: Enter Number: 5
//        *       *       *       *       *
#include<stdio.h>
void Display(int iNo)
{
    //write Updater
    while (iNo > 0)
    {
        printf("*\t");
        iNo--;
    }
    
}
int main()
{
    int iValue =0;
    printf("Enter Number: ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}