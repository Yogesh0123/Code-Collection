/******************************|Doubly Linear Linked List in Java|*******************************/

// Class to represent a node
class node
{
    // Data stored in the node
    public int data;

    // Reference to the next node
    public node next;

    // Reference to the previous node
    public node prev;

    // Constructor to initialize the node
    node(int iNo)
    {
        this.data = iNo;
        this.next = null;
        this.prev = null;
    }
}

// Class to implement Doubly Linear Linked List
class DoublyLL
{
    // Points to the first node
    private node first;

    // Stores the total number of nodes
    private int iCount;

    // Constructor
    public DoublyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

    // Display all nodes in the linked list
    void Display()
    {
        node temp = first;

        System.out.print("null <=> ");

        while(temp != null)
        {
            System.out.print("| " + temp.data + " | <=> ");
            temp = temp.next;
        }

        System.out.println("null");
    }

    // Return the total number of nodes
    int Count()
    {
        return iCount;
    }

    // Insert a new node at the beginning
    void InsertFirst(int iNo)
    {
        // Create a new node
        node newn = new node(iNo);

        // If linked list is empty
        if(first == null)
        {
            first = newn;
            first.next = null;
            first.prev = null;
        }
        else
        {
            // Connect the new node before the first node
            newn.next = first;
            first.prev = newn;
            first = newn;
        }

        // Increase node count
        iCount++;
    }

    // Insert a new node at the end
    void InsertLast(int iNo)
    {
        // Create a new node
        node newn = new node(iNo);

        // If linked list is empty
        if(first == null)
        {
            first = newn;
            first.next = null;
            first.prev = null;
        }
        else
        {
            node temp = first;

            // Move to the last node
            while(temp.next != null)
            {
                temp = temp.next;
            }

            // Connect the new node after the last node
            newn.prev = temp;
            temp.next = newn;
        }

        // Increase node count
        iCount++;
    }
        // Insert a new node at a specific position
    void InsertAtPos(int iNo, int iPos)
    {
        int i = 0;

        // Validate the position
        if((iPos < 1) || (iPos > iCount + 1))
        {
            return;
        }

        // Insert at the first position
        if(iPos == 1)
        {
            InsertFirst(iNo);
        }
        // Insert at the last position
        else if(iPos == iCount + 1)
        {
            InsertLast(iNo);
        }
        else
        {
            // Create a new node
            node newn = new node(iNo);

            node temp = first;

            // Move to the previous node
            for(i = 1; i < iPos - 1; i++)
            {
                temp = temp.next;
            }

            // Connect the new node
            newn.next = temp.next;
            newn.prev = temp;

            temp.next.prev = newn;
            temp.next = newn;

            // Increase node count
            iCount++;
        }
    }

    // Delete the first node
    void DeleteFirst()
    {
        // If the linked list is empty
        if(first == null)
        {
            return;
        }
        // If there is only one node
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            // Move first pointer to the next node
            first = first.next;

            // Remove the backward link
            first.prev = null;
        }

        // Decrease node count
        iCount--;
    }

    // Delete the last node
    void DeleteLast()
    {
        // If the linked list is empty
        if(first == null)
        {
            return;
        }
        // If there is only one node
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            node temp = first;

            // Move to the second last node
            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            // Remove the last node
            temp.next = null;
        }

        // Decrease node count
        iCount--;
    }

    // Delete a node from a specific position
    void DeleteAtPos(int iPos)
    {
        int i = 0;

        // Validate the position
        if((iPos < 1) || (iPos > iCount))
        {
            return;
        }

        // Delete the first node
        if(iPos == 1)
        {
            DeleteFirst();
        }
        // Delete the last node
        else if(iPos == iCount)
        {
            DeleteLast();
        }
        else
        {
            node temp = first;

            // Move to the previous node
            for(i = 1; i < iPos - 1; i++)
            {
                temp = temp.next;
            }

            // Remove the node from the linked list
            temp.next = temp.next.next;
            temp.next.prev = temp;

            // Decrease node count
            iCount--;
        }
    }
    }

// Main class
class program460
{
    public static void main(String[] args)
    {
        int iRet = 0;

        // Create the object of Doubly Linear Linked List
        DoublyLL dobj = new DoublyLL();

        // Insert nodes at the beginning
        dobj.InsertFirst(51);
        dobj.InsertFirst(21);
        dobj.InsertFirst(11);

        // Display the linked list
        dobj.Display();

        // Count total number of nodes
        iRet = dobj.Count();
        System.out.println("Number of nodes are : " + iRet);

        // Insert nodes at the end
        dobj.InsertLast(101);
        dobj.InsertLast(111);
        dobj.InsertLast(121);

        // Display the linked list
        dobj.Display();

        // Count total number of nodes
        iRet = dobj.Count();
        System.out.println("Number of nodes are : " + iRet);

        // Delete the first node
        dobj.DeleteFirst();

        // Display the linked list
        dobj.Display();

        // Count total number of nodes
        iRet = dobj.Count();
        System.out.println("Number of nodes are : " + iRet);

        // Delete the last node
        dobj.DeleteLast();

        // Display the linked list
        dobj.Display();

        // Count total number of nodes
        iRet = dobj.Count();
        System.out.println("Number of nodes are : " + iRet);

        // Insert a node at position 4
        dobj.InsertAtPos(105, 4);

        // Display the linked list
        dobj.Display();

        // Count total number of nodes
        iRet = dobj.Count();
        System.out.println("Number of nodes are : " + iRet);

        // Delete the node from position 4
        dobj.DeleteAtPos(4);

        // Display the linked list
        dobj.Display();

        // Count total number of nodes
        iRet = dobj.Count();
        System.out.println("Number of nodes are : " + iRet);
    }
}

/*
------------------------------------------------------------------------------
                        Singlyll    SinglyCL    DoublyLL   DoublyCL  stack  queue
------------------------------------------------------------------------------
c                       done        done        done        done     ----   ----
cpp                     done        done        done        done     ----   -----
java                    done        done        DONE        done      ----    ----
cpp generic             done        ----        ----        ---      ----   ----
------------------------------------------------------------------------------
*/