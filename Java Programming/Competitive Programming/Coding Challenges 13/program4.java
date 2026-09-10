// 4.Write a program to find odd factorial of given number.
// Input : 5
// Output : 15 (5 * 3 * 1)
// Input : -5
// Output : 15 (5 * 3 * 1)
// Input : 10
// Output : 945 (9 * 7 * 5 * 3 * 1)

import java.util.Scanner;

class program4
{
    static int OddFactorial(int iNo)
    {
        if (iNo < 0)
        {
            iNo = -iNo;
        }

        if (iNo == 0)
        {
            return 1;
        }

        if (iNo % 2 == 0)
        {
            iNo--;
        }

        if (iNo == 1)
        {
            return 1;
        }

        return iNo * OddFactorial(iNo - 2);
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.print("Enter number: ");
        iValue = sobj.nextInt();

        iRet = OddFactorial(iValue);

        System.out.print("Odd Factorial of number is " + iRet);

        sobj.close();
    }
}