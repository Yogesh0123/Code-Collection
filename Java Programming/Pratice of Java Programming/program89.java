import java.util.Scanner;

class Digitx
{
    public  int SumDigits(int iNo) 
    {
        int iDigit =0;
        int iSum =0;
        while (iNo != 0) //!= not equal
        {
         iDigit = iNo% 10;
         iSum= iSum + iDigit;
         iNo = iNo /10;    
        }

        return iSum;
        
    }
}

class program89
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);
        Digitx dobj = new Digitx();


        int iValue =0;
        int iRet =0;

        System.out.println("Enter number: ");
        iValue =sobj.nextInt();


        iRet=dobj.SumDigits(iValue);

        System.out.println("Summation of Digits Are  : "+iRet);
        sobj.close();
    }
}
