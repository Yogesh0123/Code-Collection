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
{}

int Count (PNODE first) //2nd Function
{
    return 0;
}

void InsertFirst(PPNODE first, int iNo) //3rd Function
{}

void InsertLast(PPNODE first, int iNo) //4th Function
{}

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

    return 0;
}