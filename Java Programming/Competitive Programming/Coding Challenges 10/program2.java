//Q2.Write a program which accept number from user and print even factors of that number.
//Input : 24
//Output: 1 2 4 6 8 12

import java.util.Scanner;

class program2
{
    static void DisplayFactor(int iNo)
    {
        int i = 0;

        if (iNo <= 0)
        {
            iNo = -iNo;
        }

        for (i = 1; i <= iNo / 2; i++)
        {
            if ((iNo % i == 0) && ((i % 2 == 0) || (i == 1)))
            {
                System.out.print(i + "\t");
            }
        }
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("Enter number: ");
        iValue = sobj.nextInt();

        DisplayFactor(iValue);

        sobj.close();
    }
}