/******************************|Doubly Circular Linked List|*******************************/
// Class to represent a node
class node
{
    // Data stored in the node
    public int data;

    // Reference to the next node
    public node next;

    // Reference to the previous node
    public node prev;

    // Constructor
    public node(int iNo)
    {
        this.data = iNo;
        this.next = null;
        this.prev = null;
    }
}

// Class to implement Doubly Circular Linked List
class DoublyCL
{
    // Points to the first node
    private node first;

    // Points to the last node
    private node last;

    // Stores total number of nodes
    private int iCount;

    // Constructor
    DoublyCL()
    {
        this.first = null;
        this.last = null;
        this.iCount = 0;
    }

    // Display all nodes
    void Display()
    {
        // Check whether the linked list is empty
        if(first == null || last == null)
        {
            return;
        }

        node temp = first;

        // Traverse the circular linked list
        do
        {
            System.out.print("| " + temp.data + " | <=> ");
            temp = temp.next;
        }while(temp != first);

        System.out.println();
    }

    // Return total number of nodes
    int Count()
    {
        return iCount;
    }

    // Insert a new node at the beginning
    void InsertFirst(int iNo)
    {
        // Create a new node
        node newn = new node(iNo);

        // If the linked list is empty
        if(first == null || last == null)
        {
            first = newn;
            last = newn;
        }
        else
        {
            // Connect the new node before the first node
            newn.next = first;
            first.prev = newn;
            first = newn;
        }

        // Maintain circular links
        first.prev = last;
        last.next = first;

        // Increase node count
        iCount++;
    }

    // Insert a new node at the end
    void InsertLast(int iNo)
    {
        // Create a new node
        node newn = new node(iNo);

        // If the linked list is empty
        if(first == null || last == null)
        {
            first = newn;
            last = newn;
        }
        else
        {
            // Connect the new node after the last node
            newn.prev = last;
            last.next = newn;
            last = newn;
        }

        // Maintain circular links
        first.prev = last;
        last.next = first;

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
        if(first == null || last == null)
        {
            return;
        }
        // If there is only one node
        else if(first == last)
        {
            first = null;
            last = null;
        }
        else
        {
            // Move first pointer to the next node
            first = first.next;

            // Maintain circular links
            first.prev = last;
            last.next = first;
        }

        // Decrease node count
        iCount--;
    }

    // Delete the last node
    void DeleteLast()
    {
        // If the linked list is empty
        if(first == null || last == null)
        {
            return;
        }
        // If there is only one node
        else if(first == last)
        {
            first = null;
            last = null;
        }
        else
        {
            // Move last pointer to the previous node
            last = last.prev;

            // Maintain circular links
            first.prev = last;
            last.next = first;
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

            // Remove the node
            temp.next = temp.next.next;
            temp.next.prev = temp;

            // Decrease node count
            iCount--;
        }
    }
    }

// Main class
class program461
{
    public static void main(String[] args)
    {
        int iRet = 0;

        // Create the object of Doubly Circular Linked List
        DoublyCL dobj = new DoublyCL();

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
java                    done        done        done        DONE      ----    ----
cpp generic             done        ----        ----        ---      ----   ----
------------------------------------------------------------------------------
*/