#include<stdio.h>
#include<string.h>

int main()
{
    char *str = "Ganesh";//char str[]="Ganesh";
    int iCnt=0;

     printf("Length of string is : %lu\n",strlen(str));

    while (*str != '\0')
    {
    iCnt++;
    str++;
    }

    printf("Length of string is :%d\n",iCnt);

    return 0; 
} 