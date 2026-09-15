/*
5. Write a program which accept area in square feet and convert it into square meter.
(1 square feet = 0.0929 Square meter)
Input : 5
Output : 0.464500
Input : 7
Output : 0.650300
*/

import java.util.Scanner;

class program5
{
    static double SquareMeter(int iValue)
    {
        double dAns = iValue * 0.0929;

        return dAns;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        double dRet = 0.0;

        System.out.print("Enter area in square feet : ");
        iValue = sobj.nextInt();

        dRet = SquareMeter(iValue);

        System.out.printf("Area in square meter is : %.6f", dRet);

        sobj.close();
    }
}