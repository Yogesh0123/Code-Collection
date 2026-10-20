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

void Display(PNODE first)
{
    while(first != NULL)  //type 1             //while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first -> next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)  //type 1          //while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }
    return iCount;
}

// Insert

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(NULL == *first)       // linked list is empty
    {
        *first = newn;
    }
    else                    // Linked List contains atleast one node
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)      // linked list is empty
    {
        *first = newn;
    }
    else                // Linked List contains atleast one node
    {
        temp = *first;
        while(temp -> next != NULL) //type 2
        {
            temp = temp -> next;
        }

        temp-> next = newn;
    }
}

void InsertAtPos(PPNODE first, int iNo, int iPos)
{

}

// Delete

void DeleteFirst(PPNODE first) //6th Function
{
    PNODE temp = NULL;
    if (*first==NULL)//Linkedlistl is empty
    {
        return;
    }
    else if ((*first) -> next == NULL)//Linkedlist contains 1 node
    {
        free(*first);
        *first= NULL;
    }        
    else//Linkedlist contains more than 1 node
    {
        temp = *first;
        *first= (*first)->next;
        free(temp);
        
    }
    
}

void DeleteLast(PPNODE first) //7th Function
{
    PNODE temp = NULL;

      if (*first==NULL)//Linkedlist is empty
    {
        return;
    }
    else if ((*first) -> next == NULL)//Linkedlist contains 1 node
    {
        free(*first);
        *first= NULL;
    }        
    else//Linkedlist contains more than 1 node
    {
        temp = *first;
        while ( temp -> next ->next != NULL) //type 3
        {
            temp= temp->next;
        }

        free(temp->next);
        temp->next= NULL;
        
    }
}

void DeleteAtPos(PPNODE first, int iPos)
{

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

    printf("NUmber of nodes are : %d\n",iRet);

    InsertLast(&head,111);
    InsertLast(&head,121);

    Display(head);
    iRet = Count(head);

    printf("NUmber of nodes are : %d\n",iRet);

    DeleteFirst(&head);
       Display(head);
        iRet = Count(head);

        DeleteLast(&head);
         Display(head);
    iRet = Count(head);

    printf("NUmber of nodes are : %d\n",iRet);
    return 0;
}