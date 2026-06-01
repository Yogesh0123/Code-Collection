import java.util.Scanner;

class Digitx
{
    public static int CountDigits(int iNo) 
    {
        int iDigit =0;
        int iCount =0;
        while (iNo != 0) //!= not equal
        {
         iDigit = iNo% 10;
         if(iDigit==7)
         {
            iCount++;
         }
         iNo = iNo /10;    
        }

        return iCount;
        
    }
}

class program85
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);
        Digitx dobj = new Digitx();


        int iValue =0;
        int iRet =0;

        System.out.println("Enter number: ");
        iValue =sobj.nextInt();


        iRet=dobj.CountDigits(iValue);

        System.out.println("Number Of Digits are 7 : "+iRet);
        sobj.close();
    }
}
