/************|Generic Singly Circular Linked List using C++ Templates|************/  
#include<iostream>
using namespace std;

#pragma pack(1)

// Structure to represent a node
template <class T>
struct node
{
    // Data stored in the node
    T data;

    // Pointer to the next node
    struct node *next;
};

// Class to implement Generic Singly Circular Linked List
template <class T>
class SinglyCL
{
    private:

        // Points to the first node
        struct node<T> *first;

        // Points to the last node
        struct node<T> *last;

        // Stores the total number of nodes
        int iCount;

    public:

        // Constructor
        SinglyCL();

        // Display all nodes
        void Display();

        // Return total number of nodes
        int Count();

        // Insert a node at the beginning
        void InsertFirst(T iNo);

        // Insert a node at the end
        void InsertLast(T iNo);

        // Insert a node at a specific position
        void InsertAtPos(T iNo, int iPos);

        // Delete the first node
        void DeleteFirst();

        // Delete the last node
        void DeleteLast();

        // Delete a node from a specific position
        void DeleteAtPos(int iPos);
};

// Constructor
template <class T>
SinglyCL<T>::SinglyCL()
{
    cout<<"Inside Constructor\n";

    // Initialize first pointer
    this->first = NULL;

    // Initialize last pointer
    this->last = NULL;

    // Initialize node count
    this->iCount = 0;
}

// Display all nodes in the circular linked list
template <class T>
void SinglyCL<T>::Display()
{
    struct node<T> *temp = NULL;

    // Check whether the linked list is empty
    if(this->first == NULL && this->last == NULL)
    {
        return;
    }

    // Start traversal from the first node
    temp = this->first;

    do
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }while(last->next != temp);

    cout<<"\n";
}

// Return total number of nodes
template <class T>
int SinglyCL<T>::Count()
{
    return this->iCount;
}

// Insert a new node at the beginning
template <class T>
void SinglyCL<T>::InsertFirst(T iNo)
{
    // Create a new node
    struct node<T> *newn = NULL;

    newn = new struct node<T>;

    newn->data = iNo;
    newn->next = NULL;

    // If the linked list is empty
    if(this->first == NULL && this->last == NULL)
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        // Connect the new node before the first node
        newn->next = this->first;
        this->first = newn;
    }

    // Maintain the circular link
    this->last->next = this->first;

    // Increase node count
    this->iCount++;
}

// Insert a new node at the end
template <class T>
void SinglyCL<T>::InsertLast(T iNo)
{
    // Create a new node
    struct node<T> *newn = NULL;

    newn = new struct node<T>;

    newn->data = iNo;
    newn->next = NULL;

    // If the linked list is empty
    if(this->first == NULL && this->last == NULL)
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        // Connect the new node after the last node
        this->last->next = newn;
        this->last = newn;
    }

    // Maintain the circular link
    this->last->next = this->first;

    // Increase node count
    this->iCount++;
}
// Insert a new node at a specific position
template <class T>
void SinglyCL<T>::InsertAtPos(T iNo, int iPos)
{
    int i = 0;
    struct node<T> *newn = NULL;
    struct node<T> *temp = NULL;

    // Validate the position
    if((iPos < 1) || (iPos > this->iCount + 1))
    {
        cout<<"Invalid position\n";
        return;
    }

    // Insert at the first position
    if(iPos == 1)
    {
        this->InsertFirst(iNo);
    }
    // Insert at the last position
    else if(iPos == this->iCount + 1)
    {
        this->InsertLast(iNo);
    }
    else
    {
        // Start traversal from the first node
        temp = this->first;

        // Create a new node
        newn = new struct node<T>;

        newn->data = iNo;
        newn->next = NULL;

        // Move to the previous node
        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        // Connect the new node
        newn->next = temp->next;
        temp->next = newn;

        // Increase node count
        this->iCount++;
    }
}

// Delete the first node
template <class T>
void SinglyCL<T>::DeleteFirst()
{
    // Check whether the linked list is empty
    if(this->first == NULL && this->last == NULL)
    {
        return;
    }
    // If there is only one node
    else if(this->first == this->last)
    {
        delete this->first;

        this->first = NULL;
        this->last = NULL;
    }
    else
    {
        // Move first pointer to the next node
        this->first = this->first->next;

        // Delete the old first node
        delete this->last->next;

        // Maintain the circular link
        this->last->next = this->first;
    }

    // Decrease node count
    this->iCount--;
}

// Delete the last node
template <class T>
void SinglyCL<T>::DeleteLast()
{
    struct node<T> *temp = NULL;

    // Check whether the linked list is empty
    if(this->first == NULL && this->last == NULL)
    {
        return;
    }
    // If there is only one node
    else if(this->first == this->last)
    {
        delete this->first;

        this->first = NULL;
        this->last = NULL;
    }
    else
    {
        // Start traversal from the first node
        temp = this->first;

        // Move to the second last node
        while(temp->next != this->last)
        {
            temp = temp->next;
        }

        // Delete the last node
        delete this->last;

        // Update last pointer
        this->last = temp;

        // Maintain the circular link
        this->last->next = this->first;
    }

    // Decrease node count
    this->iCount--;
}

// Delete a node from a specific position
template <class T>
void SinglyCL<T>::DeleteAtPos(int iPos)
{
    int i = 0;
    struct node<T> *temp = NULL;
    struct node<T> *target = NULL;

    // Validate the position
    if((iPos < 1) || (iPos > this->iCount))
    {
        cout<<"Invalid position\n";
        return;
    }

    // Delete the first node
    if(iPos == 1)
    {
        this->DeleteFirst();
    }
    // Delete the last node
    else if(iPos == this->iCount)
    {
        this->DeleteLast();
    }
    else
    {
        // Start traversal from the first node
        temp = this->first;

        // Move to the previous node
        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        // Store the node to be deleted
        target = temp->next;

        // Remove the node from the linked list
        temp->next = target->next;

        // Delete the node
        delete target;

        // Decrease node count
        this->iCount--;
    }
}
// Main function
int main()
{
    int iRet = 0;

    // Create the object of Generic Singly Circular Linked List
    SinglyCL<int> sobj;

    // Insert nodes at the beginning
    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    // Insert nodes at the end
    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    // Display the linked list
    sobj.Display();

    // Count total number of nodes
    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    // Delete the first node
    sobj.DeleteFirst();

    // Display the linked list
    sobj.Display();

    // Count total number of nodes
    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    // Delete the last node
    sobj.DeleteLast();

    // Display the linked list
    sobj.Display();

    // Count total number of nodes
    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    // Insert a new node at position 4
    sobj.InsertAtPos(105, 4);

    // Display the linked list
    sobj.Display();

    // Count total number of nodes
    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    // Delete the node from position 4
    sobj.DeleteAtPos(4);

    // Display the linked list
    sobj.Display();

    // Count total number of nodes
    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    return 0;
}