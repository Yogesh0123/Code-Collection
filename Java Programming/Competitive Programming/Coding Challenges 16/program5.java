/*
5.Write a program which accept range from user and display all numbers in
between that range in reverse order.
Input : 23 35
Output : 35 34 33 32 31 30 29 28 27 26 25 24 23
Input : 10 18
Output : 18 17 16 15 14 13 12 11 10
Input : 10 10
Output : 10
Input : -10 2
Output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
Input : 90 18
Output : Invalid range
*/

import java.util.Scanner;

class program5
{
    static void RangeDislayRev(int iStart, int iEnd)
    {
        if (iStart > iEnd)
        {
            return;
        }

        System.out.print(iEnd + "\t");

        if (iEnd == iStart)
        {
            return;
        }

        RangeDislayRev(iStart, iEnd - 1);
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;

        System.out.print("Enter Starting Point: ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter Ending Point: ");
        iValue2 = sobj.nextInt();

        if (iValue1 > iValue2)
        {
            System.out.print("Invalid Range");
        }
        else
        {
            RangeDislayRev(iValue1, iValue2);
        }

        sobj.close();
    }
}