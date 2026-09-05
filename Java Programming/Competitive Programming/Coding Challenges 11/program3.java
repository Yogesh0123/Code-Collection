//3.Write a program which accept number from user and display all its non factors.
//Input : 12
//Output : 5 7 8 9 10 11
//Input : 13
//Output : 2 3 4 5 6 7 8 9 10 11 12
//Input : 10
//Output : 3 4 6 7 8 9

import java.util.Scanner;

class program3
{
    static void NonFact(int iNo)
    {
        if (iNo < 0)
        {
            iNo = -iNo;
        }

        int[] Arr = new int[iNo];

        int i = 1;

        while (i < iNo)
        {
            Arr[i] = i;
            i++;
        }

        i = 1;

        while (i < iNo)
        {
            if (iNo % i == 0)
            {
                Arr[i] = 0;
            }

            i++;
        }

        i = 1;

        while (i < iNo)
        {
            if (Arr[i] != 0)
            {
                System.out.print(Arr[i] + "\t");
            }

            i++;
        }
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("Enter number ");
        iValue = sobj.nextInt();

        NonFact(iValue);

        sobj.close();
    }
}