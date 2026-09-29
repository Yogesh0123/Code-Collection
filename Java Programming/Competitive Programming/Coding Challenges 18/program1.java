/*
1. Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.
Input : N : 6

Elements : 85 66 3 80 93 88

Output : 53 (234 - 181)
*/

import java.util.Scanner;

class program1
{
    static int Difference(int Arr[])
    {
        int iEvenSum = 0;
        int iOddSum = 0;

        for (int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if (Arr[iCnt] % 2 == 0)
            {
                iEvenSum = iEvenSum + Arr[iCnt];
            }
            else
            {
                iOddSum = iOddSum + Arr[iCnt];
            }
        }

        return iEvenSum - iOddSum;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iRet = 0;

        System.out.print("Enter number of elements : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter " + iSize + " elements");

        for (int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print("Enter element " + (iCnt + 1) + " : ");
            Arr[iCnt] = sobj.nextInt();
        }

        iRet = Difference(Arr);

        System.out.println("Difference is : " + iRet);

        sobj.close();
    }
}