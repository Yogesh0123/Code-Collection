import java.util.*;

class StringX
{
    public void Display(String str)
    {
        System.out.println("Received  String is : "+str);
    }
}
class program268
{
    public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);
        String str = null;

        StringX strobj = new StringX();

        System.out.println("Enter string : ");
        str = sobj.nextLine();

        strobj.Display(str);
    }
}
