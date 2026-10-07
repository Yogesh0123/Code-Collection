/*
2. Accept N numbers from user and accept one another number as NO ,
return index of first occurrence of that NO.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 1

Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : -1
*/

import java.util.Scanner;

class program2
{
    static int FirstOcc(int Arr[], int iNo)
    {
        int iIndex = -1;

        for (int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if (Arr[iCnt] == iNo)
            {
                iIndex = iCnt;
                break;
            }
        }

        return iIndex;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iValue = 0;

        System.out.print("Enter number of elements : ");
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

        int iRet = FirstOcc(Arr, iValue);

        if (iRet == -1)
        {
            System.out.print("There is no such number");
        }
        else
        {
            System.out.print("First occurrence of number is " + iRet);
        }

        sobj.close();
    }
}