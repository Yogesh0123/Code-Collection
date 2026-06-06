// 2. Accept single digit number from user and print it into word.
// Input : 9
// Output : Nine
// Input : -3
// Output : Three
// Input : 12
// Output : Invalid Number

#include<stdio.h>
void Display(int iNo)
{
    char *arr[] ={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};


    if (iNo<0)
    {
        iNo=-iNo;
    }
    printf("Output is : ");

    if (iNo >= 0 && iNo <= 9)
    {
        printf("%s",arr[iNo]);
    }
    
    else
    {
        printf("Invalid Number");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}