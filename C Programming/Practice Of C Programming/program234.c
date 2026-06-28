#include<stdio.h>
#include<string.h>

int main()
{
    char str[]= "Jay Ganesh";//10 byte
    int iRet = 0;

    iRet=strlen(str);

    printf("Length of string is : %d\n",strlen(str));

    return 0; 
}