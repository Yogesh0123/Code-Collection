//Q4.Write a program which accept number from user and return summation of all its non factors.
//Input : 12
//Output : 50
//Input : 10
//Output : 37

import java.util.Scanner;

class program4
{
    static int SumNonFact(int iNo)
    {
        if (iNo < 0)
        {
            iNo = -iNo;
        }

        int i = 1;
        int iTotal = 0;
        int iFactSum = 0;

        while (i <= iNo)
        {
            iTotal = iTotal + i;

            if (iNo % i == 0)
            {
                iFactSum = iFactSum + i;
            }

            i++;
        }

        return iTotal - iFactSum;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.print("Enter Number : ");
        iValue = sobj.nextInt();

        iRet = SumNonFact(iValue);

        System.out.print("Output is : " + iRet);

        sobj.close();
    }
}