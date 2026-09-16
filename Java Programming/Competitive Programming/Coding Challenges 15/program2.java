/*
2.Write a program which accept number from user and return the count of odd
digits.

Input : 2395
Output : 3

Input : 1018
Output : 2

Input : -1018
Output : 2

Input : 8462
Output : 0
*/

import java.util.Scanner;

class program2
{
    static int CountOdd(int iNo)
    {
        int iCount = 0;

        String str = Integer.toString(iNo);

        for (int i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            if (ch >= '0' && ch <= '9')
            {
                int iDigit = ch - '0';

                if (iDigit % 2 != 0)
                {
                    iCount++;
                }
            }
        }

        return iCount;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.print("Enter number : ");
        iValue = sobj.nextInt();

        iRet = CountOdd(iValue);

        System.out.print("Count of odd digits is : " + iRet);

        sobj.close();
    }
}