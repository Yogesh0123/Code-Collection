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
    private:
        PNODE first;
        int iCount;
    public:
        SingLL()
        {
            cout<<"Inside Constructor\n"<<endl;
            this->first=NULL;
            this->iCount=0;
        }
};

int main()
{
    SingLL sobj;//create object
    //5 node
  sobj.first=NULL;//Error
  sobj.iCount=15;//Error

    return 0;
}