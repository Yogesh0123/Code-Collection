/*
Q3. Accept number of rows and number of columns from user
and display below pattern.

Input : iRow = 3, iCol = 5
Output:
Output is : 5 4 3 2 1
            5 4 3 2 1
            5 4 3 2 1
*/

import java.util.Scanner;

class Logic
{
    void Pattern(int iRow, int iCol)
    {
        int i = 1;

        while(i <= iRow)
        {
            if(i == 1)
            {
                System.out.print("Output is : ");
            }
            else
            {
                System.out.print("            ");
            }

            for(int j = iCol; j >= 1; j--)
            {
                System.out.print(j + " ");
            }

            System.out.println();
            i++;
        }
    }
}

class program3
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number Of Rows: ");
        int iValue1 = sobj.nextInt();

        System.out.print("Enter Number Of Columns: ");
        int iValue2 = sobj.nextInt();

        Logic obj = new Logic();
        obj.Pattern(iValue1, iValue2);

        sobj.close();
    }
}