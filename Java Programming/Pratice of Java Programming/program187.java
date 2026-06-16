//input:    7
//output:   A   b   C   d   E   f   G
import java.util.*;

class program187
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';
        char ch1 ='\0';

        for(iCnt=1, ch='A',ch1='a'; iCnt<= iNo; iCnt++,ch++,ch1++) 
        {
          if (iCnt %2 == 0 ) 
            {
                System.out.print(ch1+"\t");
            }
            else
            {
                System.out.print(ch+"\t");
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