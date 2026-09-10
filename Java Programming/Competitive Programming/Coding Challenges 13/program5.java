// 5. Write a program which returns difference between Even factorial and odd factorial of given number.
// Input : 5
// Output : -7 (8 - 15)
// Input : -5
// Output : -7 (8 - 15)
// Input : 10
// Output : 2895 (3840 - 945)

import java.util.Scanner;

class program5
{
    static int FactorialDiff(int iNo)
    {
        if (iNo < 0)
        {
            iNo = -iNo;
        }

        int iEvenFact = 1;
        int iOddFact = 1;
        int i = 1;

        while (i <= iNo)
        {
            if (i % 2 == 0)
            {
                iEvenFact = iEvenFact * i;
            }
            else
            {
                iOddFact = iOddFact * i;
            }

            i++;
        }

        return iEvenFact - iOddFact;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.print("Enter number: ");
        iValue = sobj.nextInt();

        iRet = FactorialDiff(iValue);

        System.out.print("Factorial difference is " + iRet);

        sobj.close();
    }
}