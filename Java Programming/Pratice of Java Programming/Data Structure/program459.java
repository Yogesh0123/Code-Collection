/*---------------Singly Circular Linked List---------------*/

// Class to represent a node
class node
{
    // Data stored in the node
    public int data;

    // Reference to the next node
    public node next;

    // Constructor to initialize the node
    node(int iNo)
    {
        this.data = iNo;
        this.next = null;
    }
}

// Class to implement Singly Circular Linked List
class SinglyCL
{
    // Points to the first node
    private node first;

    // Points to the last node
    private node last;

    // Stores the total number of nodes
    private int iCount;

    // Constructor
    public SinglyCL()
    {
        this.first = null;
        this.last = null;
        this.iCount = 0;
    }

    // Display all nodes in the linked list
    public void Display()
    {
        // Check whether the linked list is empty
        if(first == null && last == null)
        {
            System.out.println("Linked List is empty.");
            return;
        }

        node temp = first;

        System.out.print("<=> ");

        // Traverse the circular linked list
        do
        {
            System.out.print("| " + temp.data + " | <=> ");
            temp = temp.next;
        }while(temp != first);

        System.out.println();
    }

    // Return the total number of nodes
    public int Count()
    {
        return iCount;
    }

    // Insert a new node at the beginning
    public void InsertFirst(int iNo)
    {
        // Create a new node
        node newn = new node(iNo);

        // If linked list is empty
        if(first == null && last == null)
        {
            first = newn;
            last = newn;
        }
        else
        {
            // Connect new node before first node
            newn.next = first;
            first = newn;
        }

        // Maintain circular link
        last.next = first;

        // Increase node count
        iCount++;
    }

    // Insert a new node at the end
    public void InsertLast(int iNo)
    {
        // Create a new node
        node newn = new node(iNo);

        // If linked list is empty
        if(first == null && last == null)
        {
            first = newn;
            last = newn;
        }
        else
        {
            // Attach new node after last node
            last.next = newn;
            last = newn;
        }

        // Maintain circular link
        last.next = first;

        // Increase node count
        iCount++;
    }
        // Insert a new node at a specific position
    public void InsertAtPos(int iNo, int iPos)
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
            temp.next = newn;

            // Increase node count
            iCount++;
        }
    }

    // Delete the first node
    public void DeleteFirst()
    {
        // If linked list is empty
        if(first == null && last == null)
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

            // Maintain circular link
            last.next = first;
        }

        // Decrease node count
        iCount--;
    }

    // Delete the last node
    public void DeleteLast()
    {
        // If linked list is empty
        if(first == null && last == null)
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
            node temp = first;

            // Move to the second last node
            while(temp.next != last)
            {
                temp = temp.next;
            }

            // Update last pointer
            last = temp;

            // Maintain circular link
            last.next = first;
        }

        // Decrease node count
        iCount--;
    }

    // Delete a node from a specific position
    public void DeleteAtPos(int iPos)
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

            // Decrease node count
            iCount--;
        }
    }
    }

// Main class
class program459
{
    public static void main(String[] args)
    {
        int iRet = 0;

        // Create the object of Singly Circular Linked List
        SinglyCL sobj = new SinglyCL();

        // Insert nodes at the beginning
        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        // Display the linked list
        sobj.Display();

        // Count total number of nodes
        iRet = sobj.Count();
        System.out.println("Number of nodes are : " + iRet);

        // Insert nodes at the end
        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        // Display the linked list
        sobj.Display();

        // Count total number of nodes
        iRet = sobj.Count();
        System.out.println("Number of nodes are : " + iRet);

        // Delete the first node
        sobj.DeleteFirst();

        // Display the linked list
        sobj.Display();

        // Count total number of nodes
        iRet = sobj.Count();
        System.out.println("Number of nodes are : " + iRet);

        // Delete the last node
        sobj.DeleteLast();

        // Display the linked list
        sobj.Display();

        // Count total number of nodes
        iRet = sobj.Count();
        System.out.println("Number of nodes are : " + iRet);

        // Insert a node at position 4
        sobj.InsertAtPos(105, 4);

        // Display the linked list
        sobj.Display();

        // Count total number of nodes
        iRet = sobj.Count();
        System.out.println("Number of nodes are : " + iRet);

        // Delete the node from position 4
        sobj.DeleteAtPos(4);

        // Display the linked list
        sobj.Display();

        // Count total number of nodes
        iRet = sobj.Count();
        System.out.println("Number of nodes are : " + iRet);
    }
}


/*
------------------------------------------------------------------------------
                        Singlyll    SinglyCL    DoublyLL   DoublyCL  stack  queue
------------------------------------------------------------------------------
c                       done        done        done        done     ----   ----
cpp                     done        done        done        done     ----   ----
java                    done        DONE        ----        ----     ----   ----
cpp generic             done        ----        ----        ----     ----   ----
------------------------------------------------------------------------------
scl,dl,dcl,
*/
    
