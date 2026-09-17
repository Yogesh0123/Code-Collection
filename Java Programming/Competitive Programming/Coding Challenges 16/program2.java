/*
2. Write a program which accept range from user and display all even numbers in
between that range.
Input : 23 35
Output : 24 26 28 30 32 34
Input : 10 18
Output : 10 12 14 16 18
Input : 10 10
Output : 10
Input : -10 2
Output : -10 -8 -6 -4 -2 0 2
Input : 90 18
Output : Invalid range
*/

import java.util.Scanner;

class program2
{
    static void RangeDisplayEven(int iStart, int iEnd)
    {
        if (iStart > iEnd)
        {
            return;
        }

        if (iStart % 2 == 0)
        {
            System.out.print(iStart + "\t");
        }

        RangeDisplayEven(iStart + 1, iEnd);
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;

        System.out.print("Enter starting point: ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter ending point: ");
        iValue2 = sobj.nextInt();

        if (iValue1 > iValue2)
        {
            System.out.print("Invalid Range");
        }
        else
        {
            RangeDisplayEven(iValue1, iValue2);
        }

        sobj.close();
    }
}