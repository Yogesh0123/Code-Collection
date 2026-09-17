/*
3. Write a program which accept range from user and return addition of all numbers in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 212
Input : 10 18
Output : 126
Input : -10 2
Output : Invalid range
Input : 90 18
Output : Invalid range
*/

import java.util.Scanner;

class program3
{
    static int RangeSum(int iStart, int iEnd)
    {
        if ((iStart < 0) || (iEnd < 0) || (iStart > iEnd))
        {
            return -1;
        }

        if (iStart == iEnd)
        {
            return iStart;
        }

        return iStart + RangeSum(iStart + 1, iEnd);
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;
        int iRet = 0;

        System.out.print("Enter starting point : ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter ending point : ");
        iValue2 = sobj.nextInt();

        iRet = RangeSum(iValue1, iValue2);

        if (iRet == -1)
        {
            System.out.print("Invalid Range");
        }
        else
        {
            System.out.print("Addition is : " + iRet);
        }

        sobj.close();
    }
}