// 4.Write a program which accept number from user and display its table.
// Input : 2
// Output : 2 4 6 8 10 12 14 16 18 20
// Input : 5
// Output : 5 10 15 20 25 30 35 40 45 50
// Input : -5
// Output : 5 10 15 20 25 30 35 40 45 50

import java.util.Scanner;

class program4
{
    static void Table(int iNo)
    {
        if (iNo < 0)
        {
            iNo = -iNo;
        }

        int i = 1;

        System.out.print("Output is: ");

        do
        {
            System.out.print(" " + (iNo * i) + "\t");
            i++;
        }
        while (i <= 10);
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("Enter number : ");
        iValue = sobj.nextInt();

        Table(iValue);

        sobj.close();
    }
}