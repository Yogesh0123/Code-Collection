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

    obj.data = 11;
    obj.next = NULL;

    printf("%d\n",obj.data);

    return 0;
}