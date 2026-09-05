//5.Write a program which accept number from user and return difference between summation of all its factors and non factors.
//Input : 12
//Output : -34 (16 - 50)
//Input : 10
//Output : -29 (8 - 37)

import java.util.Scanner;

class program5
{
    static int FactDiff(int iNo)
    {
        if (iNo < 0)
        {
            iNo = -iNo;
        }

        int i = 1;
        int iTotalSum = 0;
        int iFactSum = 0;

        while (i < iNo)
        {
            iTotalSum = iTotalSum + i;

            if (iNo % i == 0)
            {
                iFactSum = iFactSum + i;
            }

            i++;
        }

        int iNonFactSum = iTotalSum - iFactSum;

        return iFactSum - iNonFactSum;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.print("Enter number ");
        iValue = sobj.nextInt();

        iRet = FactDiff(iValue);

        System.out.print(iRet);

        sobj.close();
    }
}