import java.util.*;

class program264
{
    public static void main(String[] args) 
    {
        Scanner sobj= new Scanner(System.in);
        String Arr = null;

        System.out.println("Enter String: ");
        Arr = sobj.nextLine();

        System.out.println("Length of string is : "+Arr.length());//method

        int i =0;// new variable create

        for ( i=0 ;i<Arr.length(); i++)
        {
            System.out.println(Arr.charAt(i)); //i will be start from 0
        }
        
    }   
}