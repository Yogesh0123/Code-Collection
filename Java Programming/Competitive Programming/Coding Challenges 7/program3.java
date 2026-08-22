/*
3. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 5 iCol = 5
Output :$ * * * *
        # $ * * *
        # # $ * *
        # # # $ *
        # # # # $
*/

import java.util.*;

class program3
{
    public static void Pattern(int iRow,int iCol) 
    {
        int i=1,j=0;

        do {
           j=1;
            do {
                if (j<i) 
                    {
                        System.out.print("#\t");
                    } 
                else if(j==i)
                    {
                        System.out.print("$\t");
                    }
                else 
                    {
                        System.out.print("*\t");
                    }
                 j++;
               } while (j <= iCol);
               i++;
               System.out.println();   
        } while (i<=iRow);
    }

    public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);

        int iValue1=0,iValue2=0;

        System.out.println("Enter number of rows :");
        iValue1=sobj.nextInt();

        System.out.println("Enter number of columns :");
        iValue2=sobj.nextInt();

        Pattern(iValue1, iValue2);

        sobj.close();
    }
}