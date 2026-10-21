#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main()
{
    NODE obj;

    cout<<sizeof(obj)<<endl; //12 btyte/ 8 byte

    return 0;
}