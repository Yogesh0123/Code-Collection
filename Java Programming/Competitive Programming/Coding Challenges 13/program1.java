//Q1.Write a program which accept number from user and display below pattern.
// Input : 5
// Output : * * * * * # # # # #
// Input : 6
// Output : * * * * * * # # # # # # #
// Input : -5
// Output : * * * * * # # # # #
// Input : 2
// Output : * * # #

import java.util.Scanner;

class program1
{
    static void Display(int iNo)
    {
        if (iNo < 0)
        {
            iNo = -iNo;
        }

        String sStar = "*\t";
        String sHash = "#\t";

        System.out.print(sStar.repeat(iNo));
        System.out.print(sHash.repeat(iNo));
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("Enter Number: ");
        iValue = sobj.nextInt();

        Display(iValue);

        sobj.close();
    }
}