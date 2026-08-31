//Q1.Write a program which accept one number from user and print that number of even numbers on screen.

//Input : 7

//Output: 2 4 6 8 10 12 14

import java.util.Scanner;

class program1
{
    static void PrintEven(int iNo)
    {
        int iCnt = 0;

        if (iNo <= 0)
        {
            return;
        }

        for (iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print(iCnt * 2 + "\t");
        }
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("Enter number: ");
        iValue = sobj.nextInt();

        PrintEven(iValue);

        sobj.close();
    }
}