class node
{
    public int data;
    public node next;
}

class program444
{
    public static void main(String[] args) 
    {
        node newn= null;//reference

        newn = new node(); //memory

        newn.data=11;
        newn.next=null;

        System.out.println(newn.data);
        System.out.println(newn.next);
    }
}