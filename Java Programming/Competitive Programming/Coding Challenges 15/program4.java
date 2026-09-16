/*
4.Write a program which accept number from user and return multiplication of all
digits.
Input : 2395
Output : 270
Input : 1018
Output : 8
Input : 9440
Output : 144
Input : 922432
Output : 864
*/

import java.util.Scanner;

class program4
{
    static int MultDigits(int iNo)
    {
        int iMult = 1;

        String str = Integer.toString(iNo);

        for (int i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            if (ch >= '1' && ch <= '9')
            {
                int iDigit = ch - '0';
                iMult = iMult * iDigit;
            }
        }

        return iMult;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.print("Enter number: ");
        iValue = sobj.nextInt();

        iRet = MultDigits(iValue);

        System.out.print("Output is : " + iRet);

        sobj.close();
    }
}