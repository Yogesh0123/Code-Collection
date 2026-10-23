class node
{
    public int data;
    public node next; 

    node(int no)        // default constructor
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyLL
{
    private node first;//ref 
    private int iCount;

    public SinglyLL()//constructor
    {
        System.out.println("Inside constructor");
        this.first=null;
        this.iCount=0;
    }
    public void Display()
    {}

    public int Count()
    {
        return iCount;
    }

    public void Insertfirst(int iNo)
    {}

    public void InsertLast(int iNo)
    {}

    public void InsertAtPos(int iNo,int iPos)
    {}

    public void DeleteFirst()
    {}

    public void DeleteLast()
    {}

    public void DeleteAtPos(int iPos)
    {}

}
class program452
{
    public static void main(String A[])
    {
        SinglyLL sobj = new SinglyLL();
    }
    
}