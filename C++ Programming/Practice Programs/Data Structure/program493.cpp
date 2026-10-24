/************|Generic Singly Linear Linked List using C++ Templates|************/  
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

// Class to implement Generic Singly Linear Linked List
template <class T>
class SinglyLL
{
    private :

        // Points to the first node
        struct node<T> *first;

        // Stores the total number of nodes
        int iCount;

    public:

        // Constructor
        SinglyLL();

        // Display all nodes
        void Display();

        // Return total number of nodes
        int Count();

        // Insert a node at the beginning
        void InsertFirst(T iNo);

        // Insert a node at the end
        void InsertLast(T);

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
SinglyLL<T>::SinglyLL()
{
    // Initialize first pointer as NULL
    this->first = NULL;

    // Initialize node count as 0
    this->iCount = 0;
}

// Display all nodes of the linked list
template <class T>
void SinglyLL<T>::Display()
{
    struct node<T> *temp = NULL;

    // Start traversal from the first node
    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

// Return total number of nodes
template <class T>
int SinglyLL<T>::Count()
{
    return this->iCount;
}

// Insert a new node at the beginning
template <class T>
void SinglyLL<T>::InsertFirst(T iNo)
{
    // Create a new node
    struct node<T> *newn = NULL;

    newn = new struct node<T>;

    newn->data = iNo;
    newn->next = NULL;

    // If linked list is empty
    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        // Connect new node before the first node
        newn->next = this->first;
        this->first = newn;
    }

    // Increase node count
    this->iCount++;
}

// Insert a new node at the end
template <class T>
void SinglyLL<T>::InsertLast(T iNo)
{
    struct node<T> *newn = NULL;
    struct node<T> *temp = NULL;

    // Create a new node
    newn = new struct node<T>;

    newn->data = iNo;
    newn->next = NULL;

    // If linked list is empty
    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        // Start traversal from the first node
        temp = this->first;

        // Move to the last node
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        // Attach the new node at the end
        temp->next = newn;
    }

    // Increase node count
    this->iCount++;
}
// Insert a new node at a specific position
template <class T>
void SinglyLL<T>::InsertAtPos(T iNo, int iPos)
{
    int i = 0;
    struct node<T> *temp = NULL;
    struct node<T> *newn = NULL;

    // Validate the position
    if((iPos < 1) || (iPos > this->iCount + 1))
    {
        cout<<"Invalid position";
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
        // Create a new node
        newn = new struct node<T>;

        newn->data = iNo;
        newn->next = NULL;

        // Start traversal from the first node
        temp = this->first;

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
void SinglyLL<T>::DeleteFirst()
{
    struct node<T> *temp = NULL;

    // If the linked list is empty
    if(this->first == NULL)
    {
        return;
    }
    // If there is only one node
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        // Store the first node
        temp = this->first;

        // Move first pointer to the next node
        this->first = this->first->next;

        // Delete the old first node
        delete temp;
    }

    // Decrease node count
    this->iCount--;
}

// Delete the last node
template <class T>
void SinglyLL<T>::DeleteLast()
{
    struct node<T> *temp = NULL;

    // If the linked list is empty
    if(this->first == NULL)
    {
        return;
    }
    // If there is only one node
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        // Start traversal from the first node
        temp = this->first;

        // Move to the second last node
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        // Delete the last node
        delete temp->next;
        temp->next = NULL;
    }

    // Decrease node count
    this->iCount--;
}

// Delete a node from a specific position
template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    int i = 0;
    struct node<T> *temp = NULL;
    struct node<T> *target = NULL;

    // Validate the position
    if((iPos < 1) || (iPos > this->iCount))
    {
        cout<<"Invalid position";
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

    // Create the object of Generic Singly Linear Linked List
    SinglyLL<int> sobj;

    // Insert nodes at the beginning
    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    // Display the linked list
    sobj.Display();

    // Count total number of nodes
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    // Insert nodes at the end
    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    // Display the linked list
    sobj.Display();

    // Count total number of nodes
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    // Delete the first node
    sobj.DeleteFirst();

    // Display the linked list
    sobj.Display();

    // Count total number of nodes
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    // Delete the last node
    sobj.DeleteLast();

    // Display the linked list
    sobj.Display();

    // Count total number of nodes
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    // Insert a node at position 4
    sobj.InsertAtPos(105, 4);

    // Display the linked list
    sobj.Display();

    // Count total number of nodes
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    // Delete the node from position 4
    sobj.DeleteAtPos(4);

    // Display the linked list
    sobj.Display();

    // Count total number of nodes
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<endl;

    return 0;
}