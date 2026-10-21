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
        int iCount;

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
    
  sobj.first=NULL;//Drawback
  sobj.iCount=15;//Drawback

    return 0;
}