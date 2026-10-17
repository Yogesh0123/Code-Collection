#include <stdio.h>

struct node
{
    int data;
    struct node * next;//struct declaration

};
int main()
{
    struct node obj;//objet 

    // printf("%d\n",sizeof(obj));
     printf("%lu\n",sizeof(obj));//16
     //4(int)+4(Padding)+8(pointer)

    return 0;
}