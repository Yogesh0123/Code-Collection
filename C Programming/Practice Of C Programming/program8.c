/*
    START
        Accept number as No
        if No is completely divisible by 2 
            then print even 
        oterwise
            print Odd
    STOP


    START
        Accept number as No
        Divide No by 2
        IF remainder is 0 
            then print as even 
        otherwise
            print as odd
    STOP
*/

#include<stdio.h>

int main()
{
    int ivalue=0;
    int iRemainder=0;

    printf("Enter number : n");
    scanf("%d",&ivalue);

    iRemainder = ivalue % 2;

    if (iRemainder == 0)
    {
        printf("Number is even \n");
    }
    else
    {
        printf("Number is odd \n");
    }
    

    return 0;
}