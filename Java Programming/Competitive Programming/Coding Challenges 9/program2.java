//2.Accept one number from user and print that number of * on screen.
//Output: Enter Number: 5
//        *       *       *       *       *

import java.util.Scanner;

class program2
{
    static void Display(int iNo)
    {
        //write Updater
        while (iNo > 0)
        {
            System.out.print("*\t");
            iNo--;
        }
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