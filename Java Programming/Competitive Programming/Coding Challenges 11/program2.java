//Q2.Write a program which accept number from user and display its factors in decreasing order.
//Input : 12
//Output : 6 4 3 2 1
//Input : 13
//Output : 1
//Input : 10
//Output : 5 2 1

import java.util.Scanner;

class program2
{
    static void FactRev(int iNo)
    {
        if (iNo < 0)
        {
            iNo = -iNo;
        }

        int[] Arr = new int[iNo];
        int iCnt = 0;
        int i = 1;

        while (i <= iNo / 2)
        {
            if (iNo % i == 0)
            {
                Arr[iCnt] = i;
                iCnt++;
            }

            i++;
        }

        iCnt--;

        while (iCnt >= 0)
        {
            System.out.print("Output is: " + Arr[iCnt] + "\t");
            iCnt--;
        }
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("Enter number : ");
        iValue = sobj.nextInt();

        FactRev(iValue);

        sobj.close();
    }
}