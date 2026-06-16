/*
iRow = 4;
iCol = 4;

Output is : $   @   @   @
            @   $   @   @
            @   @   $   @
            @   @   @   $
 */
import java.util.*;

class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i=0;
        int j=0;

        //Filter for digonal pattern
        if (iRow != iCol) 
        {
        System.out.println("Invalid parameters");
        System.out.println("Number of rows and column should be same ");
        return;    
        }
        

        for(i=1;i<=iRow;i++)
        {
            for(j=1; j<=iCol; j++)
            {
             if (i == j) //Diagonal
            {
             System.out.print("$\t");   
             } 
             else
                {
                    System.out.print("@\t");
                }  
            }
               System.out.println();
            }
            
        }

    }


class program211
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
