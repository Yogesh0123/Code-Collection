/*
4.Write a program which accept number from user and count frequency of 4 in it.
Input : 2395
Output : 0
Input : 1018
Output : 0
Input : 9440
Output : 2
Input : 922432
Output : 1
*/

import java.util.Scanner;

class program4
{
    static int CountFour(int iNo)
    {
        int iCount = 0;

        String str = Integer.toString(iNo);

        for (int i = 0; i < str.length(); i++)
        {
            if (str.charAt(i) == '4')
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

        iRet = CountFour(iValue);

        System.out.print("Frequency is : " + iRet);

        sobj.close();
    }
}