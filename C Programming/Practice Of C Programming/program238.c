#include<stdio.h>

int main()
{
    char *str = "Ganesh";//char str[]="Ganesh";
    int iCnt=0;

    while (*str != '\0')
    {
    iCnt++;
    str++;
    }

    printf("Length of string is :%d\n",iCnt);


    return 0; 
} 