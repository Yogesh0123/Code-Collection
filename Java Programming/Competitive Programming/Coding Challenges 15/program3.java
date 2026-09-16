/*
3.Write a program which accept number from user and return the count of digits in
between 3 and 7.

Input : 2395
Output : 1

Input : 1018
Output : 0

Input : 4521
Output : 2

Input : 9922
Output : 0
*/

import java.util.Scanner;

class program3
{
    static int CountRange(int iNo)
    {
        int iCount = 0;

        String str = Integer.toString(iNo);

        for (int i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            if (ch >= '4' && ch <= '6')
            {
                iCount++;
            }
        }

        return iCount;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.print("Enter number: ");
        iValue = sobj.nextInt();

        iRet = CountRange(iValue);

        System.out.print("Count of digits between 3 and 7 is: " + iRet);

        sobj.close();
    }
}