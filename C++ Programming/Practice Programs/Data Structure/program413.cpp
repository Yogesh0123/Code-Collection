#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node * next;
    struct node * prev; //$
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
    private:
        PNODE first;
        int iCount;

    public:
        DoublyLL();

        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);
        
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
        
};

DoublyLL :: DoublyLL()
{
    cout << "Inside Constructor\n";
    this -> first = NULL;
    this -> iCount = 0;
}

void DoublyLL :: Display()
{
    PNODE temp = this->first;
    cout<<"NULL <=>";
    while (temp != NULL)
    {
        cout<<"| "<<temp->data<<"| <=>";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int DoublyLL :: Count()
{
    return this -> iCount;
}

void DoublyLL :: InsertFirst(int iNo)
{
    PNODE newn=new NODE;
    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if (this->first == NULL)
    {
        this->first=newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev=newn;
        this->first=newn;
    }
    this->iCount++;
}

void DoublyLL :: InsertLast(int iNo)
{
PNODE newn = new NODE;
PNODE temp = NULL;

newn->data=iNo;
newn->next= NULL;
newn->prev=NULL;

if (this->first==NULL)
{
    this->first= newn;
}
else
{
    temp=this->first;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=newn;
    newn->prev=temp;
}
this->iCount++;
}
void DoublyLL :: InsertAtPos(int iNo, int iPos)
{
if((iPos < 1) || (iPos > iCount + 1))
    {
        cout << "Invalid Position" << endl;
        return;
    }

    if(iPos == 1)
    {
        this->InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        this->InsertLast(iNo);
    }
    else
    {
        PNODE newn = new NODE;
        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        PNODE temp = this->first;
        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn; 
        temp->next = newn;
        newn->prev = temp; 

        this->iCount++;
    }
}
void DoublyLL :: DeleteFirst()
{
if(this->first == NULL) 
    {
        return;
    }
    else if(this->first->next == NULL) 
    {
        delete this->first;
        this->first = NULL;
    }
    else 
    {
        this->first = this->first->next;
        delete this->first->prev; 
        this->first->prev = NULL; 
    }

    this->iCount--;
}
void DoublyLL :: DeleteLast()
{
if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        PNODE temp = this->first;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->prev->next = NULL; 
        delete temp; 
    }

    this->iCount--;
}
void DoublyLL :: DeleteAtPos( int iPos)
{
if((iPos < 1) || (iPos > iCount))
    {
        cout << "Invalid Position" << endl;
        return;
    }

    if(iPos == 1)
    {
        this->DeleteFirst();
    }
    else if(iPos == iCount)
    {
        this->DeleteLast();
    }
    else
    {
        PNODE temp = this->first;
        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        PNODE target = temp->next;

        temp->next = target->next;
        target->next->prev = temp; 
        
        delete target;

        this->iCount--;
    }
}
int main()
{
    DoublyLL dobj;  
    int iRet = 0;    
    
    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);
    dobj.Display();
    cout << "Number of elements are : " << dobj.Count() << endl;

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);
    dobj.Display();
    cout << "Number of elements are : " << dobj.Count() << endl;

    dobj.DeleteFirst();
    dobj.Display();
    cout << "Number of elements are : " << dobj.Count() << endl;

    dobj.DeleteLast();
    dobj.Display();
    cout << "Number of elements are : " << dobj.Count() << endl;

    dobj.InsertAtPos(105, 4);
    dobj.Display();
    cout << "Number of elements are : " << dobj.Count() << endl;   
    
    dobj.DeleteAtPos(4);
    dobj.Display();
    cout << "Number of elements are : " << dobj.Count() << endl;
    return 0;
}