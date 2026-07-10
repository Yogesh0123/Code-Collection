/*
5. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 4
Output : 1 1 1 1
         2 2 2 2
         3 3 3 3
*/

import java.util.Scanner;

class Logic
{
    void Pattern(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;

        // Outer Loop -> Rows
        for(i = 1; i <= iRow; i++)
        {
            if(i == 1)
            {
                System.out.print("Output is : ");
            }
            else
            {
                System.out.print("            "); // 12 spaces
            }

            // Inner Loop -> Columns
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(i + " ");
            }

            // Move to next line
            System.out.println();
        }
    }
}

class program10
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;

        System.out.print("Enter Number Of Rows : ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter Number Of Columns : ");
        iValue2 = sobj.nextInt();

        Logic obj = new Logic();

        obj.Pattern(iValue1, iValue2);

        sobj.close(); // Close Scanner
    }
}