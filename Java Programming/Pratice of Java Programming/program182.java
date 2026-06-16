//input:    7
//output:   a  b   c   d   e   f   g
import java.util.*;

class program182
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';

        for(iCnt=1, ch=65; iCnt<= iNo; iCnt++,ch++) 
        {
                System.out.print(ch+"\t");
                
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