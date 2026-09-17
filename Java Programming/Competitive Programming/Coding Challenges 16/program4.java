/*
4.Write a program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 108
Input : 10 18
Output : 70
Input : -10 2
Output : Invalid range
Input : 90 18
Output : Invalid range
*/

import java.util.Scanner;

class program4
{
    static int RangeSumEven(int iStart, int iEnd)
    {
        if ((iStart < 0) || (iEnd < 0) || (iStart > iEnd))
        {
            return -1;
        }

        if (iStart > iEnd)
        {
            return 0;
        }

        if (iStart % 2 == 0)
        {
            return iStart + RangeSumEven(iStart + 1, iEnd);
        }

        return RangeSumEven(iStart + 1, iEnd);
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

        iRet = RangeSumEven(iValue1, iValue2);

        if (iRet == -1)
        {
            System.out.print("Invalid Range");
        }
        else
        {
            System.out.print("Addition is: " + iRet);
        }

        sobj.close();
    }
}