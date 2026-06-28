#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);//Issue solve//This rejects means regular expression

    printf("Enter string is : %s\n",Arr);

    return 0; 
} 

