import java.util.*;

class Digitx
{
    public  int ReverseNumber(int iNo) 
    {
        int iDigit =0;
        int iRev =0;
        while (iNo != 0) //!= not equal
        {
         iDigit = iNo% 10;
         iRev = (iRev * 10)+iDigit;
         iNo = iNo /10;    
        }

        return iRev;
        
    }
}

class program92
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);
        Digitx dobj = new Digitx();


        int iValue =0;
        int iRet =0;

        System.out.println("Enter number: ");
        iValue =sobj.nextInt();


        iRet=dobj.ReverseNumber(iValue);

        System.out.println("Reverse Number is   : "+iRet);
        sobj.close();
    }
}
