class node
{
    public int data;
    public node next;
}

class program445
{
    public static void main(String[] args) 
    {
        node head=null;//ref

        node obj1=null; // ref
        node obj2=null; // ref
        node obj3=null; // ref

        obj1=new node();//Memory 
        obj2=new node();//Memory 
        obj2=new node();//Memory 

        obj1.data=11;
        obj2.data=21;
        obj3.data=51;

        obj1.next = obj2;
        obj2.next = obj3;
        obj3.next = null;
        
        head=obj1;

        
    }
}