#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *Lchild;
    struct node *Rchild; 
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

// L D R
void Inorder(PNODE first)
{
    if(first != NULL)
    {
        Inorder(first->Lchild);
        printf("%d\n",first->data);
        Inorder(first->Rchild);
    }
}
// D L R
void Preorder(PNODE first)
{
    if(first != NULL)
    {
        printf("%d\n",first->data);
        Inorder(first->Lchild);
        Inorder(first->Rchild);
    }
}

void Postorder(PNODE first)
{
    if(first != NULL)
    {
        Inorder(first->Lchild);
        Inorder(first->Rchild);
        printf("%d\n",first->data);
    }
}

void Insert(PPNODE first, int iNo) 
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->Lchild = NULL;
    newn->Rchild = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while (1)
        {
            if(iNo > temp->data)
            {
                if(temp->Rchild == NULL)
                {
                    temp->Rchild = newn;
                    break;
                }
                temp = temp->Rchild;
            }
            else if(iNo < temp->data)
            {
                if(temp->Lchild == NULL)
                {
                    temp->Lchild = newn;
                    break;
                }
                temp = temp->Lchild;
            }
            else if(iNo == temp->data)
            {
                printf("Unable to insert as element is Duplicate \n");
                free(newn);
                break;
            }
        }
        
    }
}

int Count(PNODE first)
{
    static int iCount =0;

    if (first != NULL)
    {
        iCount++;
        Count(first->Lchild);
        Count(first->Rchild);
    }

    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    Insert(&head,11);
    Insert(&head,5);
    Insert(&head,17);

    printf("Inorder display : \n");
    Inorder(head);
    
    printf("PreOrder display : \n");
    Preorder(head);

    printf("PostOrder display : \n");
    Postorder(head);

    iRet=Count(head);
    printf("Number of nodes are  : %d\n",iRet);

    return 0;
}

// remeber BST doesnt allowed duplicate data;