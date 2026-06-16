import java.util.Scanner;

class Digitx
{
    public static void CountEvenOddDigits(int iNo) 
    {
        int iDigit =0;
        int iCountEven =0,iCountOdd =0;

        while (iNo != 0) //!= not equal
        {
         iDigit = iNo% 10;
         if((iDigit % 2)==0)
         {
            iCountEven++;
         }
         else
         {
            iCountOdd++;
         }
         iNo = iNo /10;    
        }

        System.out.println("Number of Even digits are : "+iCountEven);
        System.out.println("Number of Odd digits are : "+iCountOdd);
        
        
    }
}

class program88
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);
        Digitx dobj = new Digitx();


        int iValue =0;
       

        System.out.println("Enter number: ");
        iValue =sobj.nextInt();


        dobj.CountEvenOddDigits(iValue);
        sobj.close();
    }
}
