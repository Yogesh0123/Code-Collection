//input:    7
//output:   A   *   B   *   C   *   D

import java.util.*;

class program182
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';

        for(iCnt=1, ch='A'; iCnt<= iNo; iCnt++,ch++) 
        {
          if (iCnt %2 == 0 ) 
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print("\t");
                ch++;
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