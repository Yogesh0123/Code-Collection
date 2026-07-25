/*
Q. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 5
Output :4 4 4 4 4
        3 3 3 3 3
        2 2 2 2 2
        1 1 1 1 1
*/

import java.util.Scanner;

class program9 
{
    public static void Pattern(int iRow,int iCol) 
    {
        int i=0;
        int j=0;
        
        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++)
            {
                System.out.print((iRow-i+1)+"\t");
            }
             System.out.println();
        }
    }
    public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);
        int iValue1=0,iValue2=0;

        System.out.print("Enter Number of Rows: ");
        iValue1=sobj.nextInt();
        
        System.out.print("Enter Number of Columns: ");
        iValue2=sobj.nextInt();

        Pattern(iValue1,iValue2);

        sobj.close();
    }
    
}
