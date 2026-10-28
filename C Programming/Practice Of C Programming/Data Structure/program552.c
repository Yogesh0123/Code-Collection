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
    if(first != NULL)
    {
        printf("| %d | ->",first->data);
        Display(first->next);
    }
}

int Count (PNODE first) //2nd Function
{
    static int iCount =0;

    if (first != NULL)
    {
        iCount++;
        first= first -> next;
        Count(first);
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
    printf("\nNumber of nodes are : %d\n",iRet);

    return 0;
}