/*
1. Accept N numbers from user and return frequency of even numbers.
Input    : 6
Elements :85 66 3 80 93 88
Output : 3
*/

import java.util.Scanner;

class program1
{
    static int CountEven(int Arr[])
    {
        int iCount = 0;

        for (int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            int iRemainder = Arr[iCnt] % 2;

            if (iRemainder == 0)
            {
                iCount = iCount + 1;
            }
        }

        return iCount;
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

        iRet = CountEven(Arr);

        System.out.print("Result is : " + iRet);

        sobj.close();
    }
}