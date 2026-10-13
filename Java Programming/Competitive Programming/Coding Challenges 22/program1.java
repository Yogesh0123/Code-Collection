/*
Q1. Accept number of rows and number of columns from user
and display below pattern.

Input : iRow = 4, iCol = 3
Output:
* * *
* * *
* * *
* * *
*/

import java.util.Scanner;

class Logic
{
    void Pattern(int iRow, int iCol)
    {
        int i = 1;

        while(i <= iRow)
        {
            int j = 1;

            while(j <= iCol)
            {
                System.out.print("* ");
                j++;
            }

            System.out.println();
            i++;
        }
    }
}

class program1
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;

        System.out.print("Enter Number Of Rows: ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter Number Of Columns: ");
        iValue2 = sobj.nextInt();

        Logic obj = new Logic();
        obj.Pattern(iValue1, iValue2);

        sobj.close();
    }
}