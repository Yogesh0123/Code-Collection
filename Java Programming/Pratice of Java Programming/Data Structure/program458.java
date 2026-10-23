/*--------------------Singly Linear Linked List in Java--------------------*/ 

// Class to represent a node of the linked list
class node
{
    // Data stored in the node
    public int data;

    // Reference to the next node
    public node next;

    // Constructor to initialize node
    node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

// Class to implement Singly Linear Linked List
class SinglyLL
{
    // Reference to the first node
    public node first;

    // Stores total number of nodes
    public int iCount;

    // Constructor
    public SinglyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

    // Display all nodes of the linked list
    public void Display()
    {
        node temp = first;

        while(temp != null)
        {
            System.out.print("| "+temp.data+" | -> ");
            temp = temp.next;
        }

        System.out.println("null");
    }

    // Return total number of nodes
    public int Count()
    {
        return iCount;
    }

    // Insert a new node at the beginning
    public void InsertFirst(int iNo)
    {
        // Create new node
        node newn = new node(iNo);

        // If linked list is empty
        if(first == null)
        {
            first = newn;
        }
        else
        {
            // Link new node with first node
            newn.next = first;
            first = newn;
        }

        // Increase node count
        iCount++;
    }

    // Insert a new node at the end
    public void InsertLast(int iNo)
    {
        // Create new node
        node newn = new node(iNo);

        // If linked list is empty
        if(first == null)
        {
            first = newn;
        }
        else
        {
            node temp = first;

            // Move to the last node
            while(temp.next != null)
            {
                temp = temp.next;
            }

            // Attach new node
            temp.next = newn;
        }

        // Increase node count
        iCount++;
    }

    // Insert a new node at a specific position
    public void InsertAtPos(int iNo, int iPos)
    {
        node temp = null;
        node newn = null;
        int i = 0;

        // Validate position
        if((iPos < 1) || (iPos > iCount + 1))
        {
            return;
        }

        // Insert at first position
        if(iPos == 1)
        {
            InsertFirst(iNo);
        }
        // Insert at last position
        else if(iPos == iCount + 1)
        {
            InsertLast(iNo);
        }
        else
        {
            // Create new node
            newn = new node(iNo);

            temp = first;

            // Move to previous node
            for(i = 1; i < iPos - 1; i++)
            {
                temp = temp.next;
            }

            // Connect new node
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
        if(first == null)
        {
            return;
        }
        // If only one node is present
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            // Move first to next node
            first = first.next;
        }

        // Decrease node count
        iCount--;
    }

    // Delete the last node
    public void DeleteLast()
    {
        // If linked list is empty
        if(first == null)
        {
            return;
        }
        // If only one node is present
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            node temp = first;

            // Move to second last node
            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            // Remove last node
            temp.next = null;
        }

        // Decrease node count
        iCount--;
    }

    // Delete a node from a specific position
    public void DeleteAtPos(int iPos)
    {
        node temp = null;
        int i = 0;

        // Validate position
        if((iPos < 1) || (iPos > iCount))
        {
            return;
        }

        // Delete first node
        if(iPos == 1)
        {
            DeleteFirst();
        }
        // Delete last node
        else if(iPos == iCount)
        {
            DeleteLast();
        }
        else
        {
            temp = first;

            // Move to previous node
            for(i = 1; i < iPos - 1; i++)
            {
                temp = temp.next;
            }

            // Remove node
            temp.next = temp.next.next;

            // Decrease node count
            iCount--;
        }
    }
}

// Main class
class program458
{
    public static void main(String A[])
    {
        int iRet = 0;

        // Create linked list object
        SinglyLL sobj = new SinglyLL();

        // Insert nodes at the beginning
        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        // Insert nodes at the end
        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        // Display linked list
        sobj.Display();

        // Count total nodes
        iRet = sobj.Count();
        System.out.println("Number of nodes are : " + iRet);

        // Delete first and last node
        sobj.DeleteFirst();
        sobj.DeleteLast();

        // Display linked list
        sobj.Display();

        // Count total nodes
        iRet = sobj.Count();
        System.out.println("Number of nodes are : " + iRet);

        // Insert node at position 4
        sobj.InsertAtPos(105, 4);

        // Display linked list
        sobj.Display();

        // Count total nodes
        iRet = sobj.Count();
        System.out.println("Number of nodes are : " + iRet);

        // Delete node from position 4
        sobj.DeleteAtPos(4);

        // Display linked list
        sobj.Display();

        // Count total nodes
        iRet = sobj.Count();
        System.out.println("Number of nodes are : " + iRet);
    }
}