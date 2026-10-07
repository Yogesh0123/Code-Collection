/*
1. Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not.

Input : 6
NO: 66
Elements :85 66 3 66 93 88
Output : Number is present (TRUE)

Input : 6
NO: 12
Elements :85 11 3 15 11 111
Output : Number is not present (FALSE)
*/

import java.util.Scanner;

class program1
{
    static boolean Check(int Arr[], int iNo)
    {
        int iCnt = 0;
        boolean iFound = false;

        while (iCnt < Arr.length)
        {
            if (Arr[iCnt] == iNo)
            {
                iFound = true;
                break;
            }

            iCnt++;
        }

        return iFound;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iValue = 0;

        System.out.print("Enter number of elements: ");
        iSize = sobj.nextInt();

        System.out.print("Enter the number: ");
        iValue = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter " + iSize + " elements");

        for (int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print("Enter element " + (iCnt + 1) + ": ");
            Arr[iCnt] = sobj.nextInt();
        }

        boolean bRet = Check(Arr, iValue);

        if (bRet == true)
        {
            System.out.print("Number is present");
        }
        else
        {
            System.out.print("Number is not present");
        }

        sobj.close();
    }
}