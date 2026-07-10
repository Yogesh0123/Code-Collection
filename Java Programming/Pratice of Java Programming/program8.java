/*
3. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 5
Output : 5 4 3 2 1
         5 4 3 2 1
         5 4 3 2 1
*/

import java.util.Scanner;

class Logic
{
    void Pattern(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;
        for(i = 1; i<=iRow;i++)
        {
            if (i==1) 
            {
                System.out.print("Output is : ");
            }
            else
            {
                System.out.print("            ");//12 space
            }

            for(j = iCol; j >= 1; j--)
            {
                System.out.print(j+" ");
            }
            System.out.println(" ");
        }
    }
}

class program8 
{
    public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);
        int iValue1 =0 , iValue2=0;

        System.out.println("Enter Number Of Rows: ");
        iValue1=sobj.nextInt();

        System.out.println("Enter Number Of Columns: ");
        iValue2=sobj.nextInt();

        Logic obj=new Logic();

        obj.Pattern(iValue1,iValue2);

         sobj.close(); // Close Scanner
    }
}
