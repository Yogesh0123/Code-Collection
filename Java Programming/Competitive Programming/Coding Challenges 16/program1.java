/*
1.Write a program which accept range from user and display all numbers in between
that range.
Input : 23 35
Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
Input : 10 18
Output : 10 11 12 13 14 15 16 17 18
Input : 10 10
Output : 10
Input : -10 2
Output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2
Input : 90 18
Output : Invalid range
*/

import java.util.Scanner;

class program1
{
    static void RangeDisplay(int iStart, int iEnd)
    {
        if (iStart > iEnd)
        {
            System.out.print("Invalid Range");
            return;
        }

        if (iStart == iEnd)
        {
            System.out.print("Range is : " + iStart);
            return;
        }

        System.out.print("Range is : " + iStart + "\t");

        RangeDisplay(iStart + 1, iEnd);
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;

        System.out.print("Enter starting point : ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter ending point : ");
        iValue2 = sobj.nextInt();

        RangeDisplay(iValue1, iValue2);

        sobj.close();
    }
}