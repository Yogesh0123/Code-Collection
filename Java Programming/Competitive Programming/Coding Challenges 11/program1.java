//Q1.Write a program which accept number from user and display its multiplication of factors.
//Input : 12
//Output : 144 (1 * 2 * 3 * 4 * 6)
//Input : 13
//Output : 1 (1)
//Input : 10
//Output : 10 (1 * 2 * 5)

import java.util.Scanner;

class program1
{
    static int MultFact(int iNo)
    {
        int iMult = 1;

        if (iNo < 0)
        {
            iNo = -iNo;
        }

        int i = iNo / 2;

        while (i >= 1)
        {
            if (iNo % i == 0)
            {
                iMult = iMult * i;
            }

            i--;
        }

        return iMult;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.print("Enter number ");
        iValue = sobj.nextInt();

        iRet = MultFact(iValue);

        System.out.print("Output is: " + iRet);

        sobj.close();
    }
}