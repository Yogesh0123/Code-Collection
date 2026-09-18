/*
5.Write a program which accept number from user and count frequency of such a
digits which are less than 6.
Input : 2395
Output : 3
Input : 1018
Output : 3
Input : 9440
Output : 3
Input : 96672
Output : 1
*/

import java.util.Scanner;

class program5
{
    static int Count(int iNo)
    {
        int iCount = 0;

        String str = Integer.toString(iNo);

        for (int i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            if (ch >= '0' && ch <= '5')
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

        System.out.print("Enter number : ");
        iValue = sobj.nextInt();

        iRet = Count(iValue);

        System.out.print("Output is : " + iRet);

        sobj.close();
    }
}