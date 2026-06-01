//1.Accept one number from user and print that number of * on screen.
//Output: Enter number: 5
//        *       *       *       *       *
 #include<stdio.h>
void Display(int iNo)
{
    int iCnt =0;
    iCnt = 1;
    while (iCnt<=iNo)
    {
        printf("*\t");
        iCnt++;
    }
    
}
int main()
{
    int iValue =0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}