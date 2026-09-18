/*
2.Write a program which accept number from user and check whether it contains 0
in it or not.
Input : 2395
Output : There is no Zero
Input : 1018
Output : It Contains Zero
Input : 9000
Output : It Contains Zero
Input : 10687
Output : It Contains Zero
*/

import java.util.Scanner;

class program2
{
    static boolean ChkZero(int iNo)
    {
        String str = Integer.toString(iNo);

        return str.indexOf('0') != -1;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.print("Enter number: ");
        iValue = sobj.nextInt();

        bRet = ChkZero(iValue);

        if (bRet == true)
        {
            System.out.print("It Contains Zero");
        }
        else
        {
            System.out.print("There is no Zero");
        }

        sobj.close();
    }
}