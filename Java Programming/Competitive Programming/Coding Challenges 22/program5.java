/*
Q5. Accept number of rows and number of columns from user
and display below pattern.

Input : iRow = 3, iCol = 4
Output:
Output is : 1 1 1 1
            2 2 2 2
            3 3 3 3
*/

import java.util.Scanner;

class Logic
{
    void Pattern(int iRow, int iCol)
    {
        System.out.println("Output is :");

        for(int i = 1; i <= iRow; i++)
        {
            if(i == 1)
                System.out.print("Output is : ");
            else
                System.out.print("            ");

            int j = iCol;

            while(j > 0)
            {
                System.out.print(i + " ");
                j--;
            }

            System.out.println();
        }
    }
}

class program5
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number Of Rows : ");
        int iValue1 = sobj.nextInt();

        System.out.print("Enter Number Of Columns : ");
        int iValue2 = sobj.nextInt();

        Logic obj = new Logic();
        obj.Pattern(iValue1, iValue2);

        sobj.close();
    }
}