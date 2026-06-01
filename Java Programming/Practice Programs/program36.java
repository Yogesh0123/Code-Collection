import java.util.*;

class Digitx
{
    public  int SumEvenDigits(int iNo) 
    {
        int iDigit =0;
        int iSum =0;
        while (iNo != 0) //!= not equal
        {
         iDigit = iNo% 10;
         if (iDigit % 2==0) 
         {
            iSum= iSum + iDigit;
         }
         
         iNo = iNo /10;    
        }

        return iSum;
        
    }
}

class program91
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);
        Digitx dobj = new Digitx();


        int iValue =0;
        int iRet =0;

        System.out.println("Enter number: ");
        iValue =sobj.nextInt();


        iRet=dobj.SumEvenDigits(iValue);

        System.out.println("Summation of Even Digits Are  : "+iRet);
        sobj.close();
    }
}
