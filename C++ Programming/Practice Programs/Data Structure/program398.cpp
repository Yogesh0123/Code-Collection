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

class SingLL
{
    public:
        PNODE first;

        SingLL()
        {
            cout<<"Inside Constructor\n"<<endl;
            this->first=NULL;
        }

};

int main()
{
    SingLL sobj;//create object


    return 0;
}