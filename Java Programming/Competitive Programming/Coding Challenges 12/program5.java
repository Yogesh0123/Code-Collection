// 5. Write a program which accept number from user and display its table in reverse
// order.
// Input : 2
// Output : 20 18 16 14 12 10 8 6 4 2
// Input : 5
// Output : 50 45 40 35 30 25 20 15 10 5
// Input : -5
// Output : 50 45 40 35 30 25 20 15 10 5

import java.util.Scanner;

class program5
{
    static void TableRev(int iNo)
    {
        if (iNo < 0)
        {
            iNo = -iNo;
        }

        int i = 10;

        System.out.print("Output is: ");

        do
        {
            System.out.print(" " + (iNo * i) + "\t");
            i--;
        }
        while (i >= 1);
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("Enter number : ");
        iValue = sobj.nextInt();

        TableRev(iValue);

        sobj.close();
    }
}