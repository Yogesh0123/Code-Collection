import java.util.Scanner;

class Digitx
{
    public static int CountDigits(int iNo) 
    {
        int iCount =0;
        while (iNo != 0) //!= not equal
        {
         iCount++;
         iNo = iNo /10;    //IMP lpgic 
        }

        return iCount;
        
    }
}

class program84
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

        System.out.println("Number Of Digits are : "+iRet);
        
    }
}
