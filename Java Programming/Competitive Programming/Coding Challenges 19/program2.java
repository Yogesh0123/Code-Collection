/*
2. Accept N numbers from user and return difference between frequency of even number and odd numbers.
Input : N : 7
Elements :85 66 3 80 93 88 90
Output : 1 (4 -3)
*/

import java.util.Scanner;

class program2
{
    static int Frequency(int Arr[])
    {
        int iEven = 0;
        int iOdd = 0;

        int iCnt = 0;

        while (iCnt < Arr.length)
        {
            int iValue = Arr[iCnt];

            if ((iValue & 1) == 0)
            {
                iEven++;
            }
            else
            {
                iOdd++;
            }

            iCnt++;
        }

        return iEven - iOdd;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iRet = 0;

        System.out.print("Enter number of elements: ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter " + iSize + " elements");

        for (int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print("Enter element " + (iCnt + 1) + " : ");
            Arr[iCnt] = sobj.nextInt();
        }

        iRet = Frequency(Arr);

        System.out.print("Result is: " + iRet);

        sobj.close();
    }
}