/*

*/

import java.util.*;

class program4
{
    public static void Pattern(int iRow, int iCol)
    {
        int i = 1;
        int j = 1;

        do
        {
            j = 1;

            do
            {
                if (i == 1 || i == iRow || j == 1 || j == i || j == iCol)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print(" \t");
                }

                j++;
            }
            while (j <= iCol);

            System.out.println();

            i++;
        }
        while (i <= iRow);
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