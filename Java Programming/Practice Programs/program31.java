import java.util.Scanner;

class Digitx
{
    public static int CountEvenDigits(int iNo) 
    {
        int iDigit =0;
        int iCount =0;
        while (iNo != 0) //!= not equal
        {
         iDigit = iNo% 10;
         if((iDigit % 2)==0)
         {
            iCount++;
         }
         iNo = iNo /10;    
        }

        return iCount;
        
    }
}

class program86
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);
        Digitx dobj = new Digitx();


        int iValue =0;
        int iRet =0;

        System.out.println("Enter number: ");
        iValue =sobj.nextInt();


        iRet=dobj.CountEvenDigits(iValue);

        System.out.println("Number Of Even Digits Are  : "+iRet);
        sobj.close();
    }
}
