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

        void Display() // 1
        {}

        int Count() //2
        {
            return this->iCount;
        }

        void InsertFirst(int iNo) //3
        {}

        void InsertLast(int iNo) //4
        {}

        void InsertAtPos(int iNo,int iPos) //5
        {}

        void DeleteFirst() //6
        {}

        void DeleteLast() //7
        {}

        void DeleteAtPos(int iNo,int iPos) //8
        {}
};

int main()
{
    SingLL sobj;//create object
    
 
    return 0;
}