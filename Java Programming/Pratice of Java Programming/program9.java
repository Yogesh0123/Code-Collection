 /*
4. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 4
Output : * # * #
         * # * #
         * # * #
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
                // If Column is Odd
                if(j % 2 != 0)
                {
                    System.out.print("* ");
                }
                // If Column is Even
                else
                {
                    System.out.print("# ");
                }
            }

            System.out.println(); // Move to next line
        }
    }
}

class program9
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