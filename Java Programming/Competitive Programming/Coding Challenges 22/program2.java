/*
Q2. Accept number of rows and number of columns from user
and display below pattern.

Input : iRow = 4, iCol = 3
Output:
1 2 3
1 2 3
1 2 3
1 2 3
*/

import java.util.Scanner;

class Logic
{
    void Pattern(int iRow, int iCol)
    {
        int i = 1;

        while(i <= iRow)
        {
            for(int j = 1; j <= iCol; j++)
            {
                System.out.print(j + " ");
            }

            System.out.println();
            i++;
        }
    }
}

class program2
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0;

        System.out.print("Enter Number of Rows: ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter Number of Columns: ");
        iValue2 = sobj.nextInt();

        Logic obj = new Logic();
        obj.Pattern(iValue1, iValue2);

        sobj.close();
    }
}