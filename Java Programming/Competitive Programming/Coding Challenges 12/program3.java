// 3.Write a program to find factorial of given number.
// Input : 5
// Output : 120 (5 * 4 * 3 * 2 * 1)
// Input : -5
// Output : 120 (5 * 4 * 3 * 2 * 1)
// Input : 4
// Output : 24 (4 * 3 * 2 * 1)

import java.util.Scanner;

class program3
{
    static int Factorial(int iNo)
    {
        if (iNo < 0)
        {
            iNo = -iNo;
        }

        if (iNo == 0 || iNo == 1)
        {
            return 1;
        }

        return iNo * Factorial(iNo - 1);
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.print("Enter number: ");
        iValue = sobj.nextInt();

        if (iValue < 0)
        {
            iValue = -iValue;
        }

        iRet = Factorial(iValue);

        System.out.print("Factorial of number is : " + iRet + " (");

        int i = iValue;

        while (i >= 1)
        {
            System.out.print(i);

            if (i != 1)
            {
                System.out.print(" * ");
            }

            i--;
        }

        System.out.print(")");

        sobj.close();
    }
}