/*
4. Accept N numbers from user and accept Range, Display all elements from that range

Input : 6
Start : 60
End   : 90
Elements : 85 66 3 76 93 88
Output : 85 66 76 88

Input : 6
Start : 30
End   : 50
Elements : 85 66 3 76 93 88
Output : 0
*/

import java.util.Scanner;

class program4
{
    static void Range(int Arr[], int iStart, int iEnd)
    {
        boolean bFound = false;

        System.out.print("Result is : ");

        int iCnt = 0;

        while (iCnt < Arr.length)
        {
            int iValue = Arr[iCnt];

            if (iValue >= iStart && iValue <= iEnd)
            {
                System.out.print(iValue + "\t");
                bFound = true;
            }

            iCnt++;
        }

        if (!bFound)
        {
            System.out.print("0");
        }
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iValue1 = 0;
        int iValue2 = 0;

        System.out.print("Enter number of elements: ");
        iSize = sobj.nextInt();

        System.out.print("Enter the starting point: ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter the ending point: ");
        iValue2 = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter " + iSize + " elements");

        for (int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print("Enter element " + (iCnt + 1) + " : ");
            Arr[iCnt] = sobj.nextInt();
        }

        Range(Arr, iValue1, iValue2);

        sobj.close();
    }
}