#include <stdio.h>

#pragma pack(1)
struct node
{
    int data;
    struct node * next;//struct declaration

};
int main()
{
    struct node obj;//objet 

    // printf("%d\n",sizeof(obj));
     printf("%lu\n",sizeof(obj));//12
     //4(int)+8(pointer)

    return 0;
}