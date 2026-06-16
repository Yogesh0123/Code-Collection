import java.util.Scanner;

class Digitx
{
    public static void DisplayDigits(int iNo) 
    {
        while (iNo != 0) 
       
         System.out.println(  iNo% 10);
         iNo = iNo /10;    
        }
        
}

class program80
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);
        Digitx dobj = new Digitx();

        int iValue =0;

        System.out.println("Enter number: ");
        iValue =sobj.nextInt();

        dobj.DisplayDigits(iValue);
       sobj.close();

    }
}
