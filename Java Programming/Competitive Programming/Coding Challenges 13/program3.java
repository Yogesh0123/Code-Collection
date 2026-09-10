// 3.Write a program to find even factorial of given number.
// Input : 5
// Output : 8 (4 * 2)
// Input : -5
// Output : 8 (4 * 2)
// Input : 10
// Output : 3840 (10 * 8 * 6 * 4 * 2)

import java.util.Scanner;

class program3
{
    static int EvenFactorial(int iNo)
    {
        if (iNo < 0)
        {
            iNo = -iNo;
        }

        if (iNo <= 1)
        {
            return 1;
        }

        if (iNo % 2 != 0)
        {
            iNo--;
        }

        return iNo * EvenFactorial(iNo - 2);
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.print("Enter number");
        iValue = sobj.nextInt();

        iRet = EvenFactorial(iValue);

        System.out.print("Even Factorial of number is " + iRet);

        sobj.close();
    }
}