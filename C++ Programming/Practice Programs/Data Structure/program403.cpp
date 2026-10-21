#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyLL
{
    private:
        PNODE first;
        int iCount;

    public:
        SinglyLL();

        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);
        void DeleteFirst(int iNo);
        void DeleteLast(int iNo);
        void DeleteAtPos(int iNo, int iPos);
        
};

SinglyLL :: SinglyLL()
{
    cout << "Inside Constructor\n";
    this -> first = NULL;
    this -> iCount = 0;
}

void SinglyLL :: Display()
{

}

int SinglyLL :: Count()
{
    return this -> iCount;
}

void SinglyLL :: InsertFirst(int iNo)
{

}
void SinglyLL :: InsertLast(int iNo)
{

}
void SinglyLL :: InsertAtPos(int iNo, int iPos)
{

}
void SinglyLL :: DeleteFirst(int iNo)
{

}
void SinglyLL :: DeleteLast(int iNo)
{

}
void SinglyLL :: DeleteAtPos(int iNo, int iPos)
{

}
int main()
{
    SinglyLL sobj;       
    
    return 0;
}