import java.util.Scanner;

class Digitx
{
    public static void DisplayDigits(int iNo) 
    {
        int iDigit = 0;
         for(;iNo != 0; iNo = iNo /10 )
        {
        iDigit = iNo % 10;
        System.out.println(iDigit);
               
        }
        
    }
}

class program82
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
