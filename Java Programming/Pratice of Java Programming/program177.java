//input:7
//output:1 * 2 * 3 * 4
import java.util.*;

class program171 
{
    public static void Display(int iNo)
    {
        int iCnt =0;
        int iCount = 1;
        //int iCount =0

        for(iCnt=1;iCnt<=iNo;iCnt++) 
        {
            if (iCnt %2== 0) 
            {
                  System.out.print("*\t");
            }
            else
            {
                System.out.print(iCount+"\t");
                iCount++;
            }
          
        }
        System.out.println();
    }

    public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0;

        System.out.print("Enter the number of elements: ");
        iValue=sobj.nextInt();

        Display(iValue);//function call

    }
    
}