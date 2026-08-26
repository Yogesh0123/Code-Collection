//4.Accept two numbers from user and display first number in second number of times.
//Input: 12 5
//Output: 12 12 12 12 12
//Input: -2 3
//Output: -2 -2 -2
//Input: 21 -3
//Output:
//Input: -2 0
//Output:

import java.util.Scanner;

class program4
{
    static void Display(int iNo, int iFrequency)
    {
        int iCnt = 0;

        //Write Updater
        for (iCnt = 1; iCnt <= iFrequency; iCnt++)
        {
            System.out.print(iNo + "\t");
        }
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iCount = 0;

        System.out.print("Enter number : ");
        iValue = sobj.nextInt();

        System.out.print("Enter frequency : ");
        iCount = sobj.nextInt();

        Display(iValue, iCount);

        sobj.close();
    }
}