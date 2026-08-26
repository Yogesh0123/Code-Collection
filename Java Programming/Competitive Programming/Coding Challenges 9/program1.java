// 1. Accept one number from user and print that number of * on screen.
// Output: Enter number: 5
//         *       *       *       *       *

import java.util.Scanner;

class program1
{
    static void Display(int iNo)
    {
        int iCnt = 0;
        iCnt = 1;

        while (iCnt <= iNo)
        {
            System.out.print("*\t");
            iCnt++;
        }
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("Enter number: ");
        iValue = sobj.nextInt();

        Display(iValue);

        sobj.close();
    }
}