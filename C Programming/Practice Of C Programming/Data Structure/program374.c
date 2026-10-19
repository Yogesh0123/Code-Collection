#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first) //1st Function
{
    while(first != NULL)
    {
        printf("| %d | ->",first->data);
        first=first->next;
    }
    printf("NULL\n");
}

int Count (PNODE first) //2nd Function
{
    int iCount =0;

    while (first != NULL)
    {
        iCount++;
        first= first -> next;
    }
    
    return iCount;
}

void InsertFirst(PPNODE first, int iNo) //3rd Function
{
    PNODE newn = NULL;//create pointer

    newn = (PNODE)malloc(sizeof(NODE));//create new node

    newn->data= iNo;
    newn->next= NULL;

    if (*first==NULL)//Linkedlist is empty
    {
        *first=newn;
    }
    else//Linkedlist contains at least 1 node
    {
        newn->next=*first;
        *first = newn;
    }
    
}

void InsertLast(PPNODE first, int iNo) //4th Function
{
    PNODE newn = NULL;//create pointer

    newn = (PNODE)malloc(sizeof(NODE));//create new node

    newn->data= iNo;
    newn->next= NULL;

    if (*first==NULL)//Linkedlist is empty
    {
        *first=newn;
    }
    else//Linkedlist contains at least 1 node
    {

    }
}

void InsertAtPos(PPNODE first, int iNo, int iPos) //5th Function
{}

void DeleteFirst(PPNODE first) //6th Function
{}

void DeleteLast(PPNODE first) //7th Function
{}

void DeleteAtPos(PPNODE first,int iNo, int iPos) //8th Function
{}

int main()
{
    PNODE head = NULL;

    int iRet = 0;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);
    
    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}