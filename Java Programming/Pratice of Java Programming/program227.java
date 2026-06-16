/*
iRow = 4;
iCol = 4;

Output is : 1   
            1   2              
            1   2   3            
            1   2   3   4     
            
 */
import java.util.*;

class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i=0;
        int j=0;
        char ch ='\0';

        for(i=1,ch='a';i<=iRow;i++)
        {
            for(j=1; j<=i; j++,ch++)
            {
             System.out.print(ch+"\t");   
            }
            System.out.println();
        }
    }
}

class program227
{
    public static void main(String[] args) 
    {
        int iValue1 =0, iValue2=0;

        Scanner sobj= new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        iValue1=sobj.nextInt();

        System.out.println("Enter number of column : ");
        iValue2=sobj.nextInt();

        Pattern pobj=new Pattern();//object created 

        pobj.Display(iValue1, iValue2);
        
    }
    
}
