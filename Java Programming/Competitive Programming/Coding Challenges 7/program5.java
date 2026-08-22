/*
5. Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 4 iCol = 4
Output :1 2 3 4
          2 3 4
            3 4
              4
*/

import java.util.*;

class program5
{
    public static void Pattern(int iRow, int iCol)
    {
        for (int i = 1; i <= iRow; i++)
        {
            int sum = i - 1;

            for (int j = 1; j <= sum; j++)
            {
                System.out.print(" \t");
            }

            for (int j = i; j <= iCol; j++)
            {
                System.out.print(j+"\t");
            }

            System.out.println("");
        }
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;

        System.out.println("Enter number of rows :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns :");
        iValue2 = sobj.nextInt();

        Pattern(iValue1, iValue2);

        sobj.close();
    }
}