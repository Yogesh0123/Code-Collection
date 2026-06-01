#include<stdio.h>

int CalculateTicketPrice(int iAge)
{
    //input filter
    if (iAge < 0) 
    {
        return -1;
    }
    if (iAge >=0 && iAge <=5)
    {
        return 0;
    }
    else if (iAge >=6 && iAge <=18)
    {
        return 500;
    }
    else if (iAge >=19 && iAge <=50)
    {
        return 900;
    }
    else 
    {
        return 400;
    }
}
int main()
{
    int iValue=0;
    int iRate=0;

    printf("Please enter your age to calculate ticket prices: ");
    scanf("%d",&iValue);


    iRate=CalculateTicketPrice(iValue);
    if (iRate == -1)
    {
        printf("Please enter positive Age \n");
    }
    else
    {
    printf("Your ticket price will be %d rupees",iRate);
    }
    
    return 0;
}