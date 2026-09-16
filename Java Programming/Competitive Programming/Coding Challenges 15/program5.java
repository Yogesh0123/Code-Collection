/*
5.Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
Input : 2395
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2)
Input : 8440
Output : 16 (16 - 0)
Input : 5733
Output : -18 (0 - 18)
*/

import java.util.Scanner;

class program5
{
    static int CountDiff(int iNo)
    {
        int iEvenSum = 0;
        int iOddSum = 0;

        String str = Integer.toString(iNo);

        for (int i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            if (ch >= '0' && ch <= '9')
            {
                int iDigit = ch - '0';

                if (iDigit % 2 == 0)
                {
                    iEvenSum += iDigit;
                }
                else
                {
                    iOddSum += iDigit;
                }
            }
        }

        return iEvenSum - iOddSum;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.print("Enter Number : ");
        iValue = sobj.nextInt();

        iRet = CountDiff(iValue);

        System.out.print(iRet);

        sobj.close();
    }
}