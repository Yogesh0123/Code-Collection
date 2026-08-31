//Q3.Write a program which accept number from user and print even factors of that number.
//Input : 36
//Output: 2 6 12 18

import java.util.Scanner;

class program3
{
    static void DisplayEvenFactor(int iNo)
    {
        int i = 0;

        if (iNo <= 0)
        {
            iNo = -iNo;
        }

        for (i = 1; i <= iNo / 2; i++)
        {
            if ((iNo % i == 0) && (i % 2 == 0) && (i != 4))
            {
                System.out.print(i + "\t");
            }
        }
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter number");
        iValue = sobj.nextInt();

        DisplayEvenFactor(iValue);

        sobj.close();
    }
}