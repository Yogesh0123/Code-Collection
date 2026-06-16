/*
iRow = 5;
iCol = 6;

Output is : %   %   %   %   %
            %               %
            %               %
            %               %
            %               %
            %   %   %   %   %
 */
import java.util.*;

class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i=0;
        int j=0;

        for(i=1;i<=iRow;i++)
        {
            for(j=1; j<=iCol; j++)
            {
             if (j == 1 || j==iCol || i == 1 || i==iRow) //Diagonal
            {
             System.out.print("%\t");   
             } 
             else
                {
                    System.out.print(" \t");//Space is most imp
                }  
            }
               System.out.println();
            }
            
        }

    }


class program216
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
