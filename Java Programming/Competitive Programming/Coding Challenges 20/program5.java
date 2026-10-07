/*
5. Accept N numbers from user and return product of all odd elements.

Input : 6
Elements : 15 66 3 70 10 88
Output : 45

Input : 6
Elements : 44 66 72 70 10 88
Output : 0
*/

import java.util.Scanner;

class program5
{
    static int Product(int Arr[])
    {
        int iProduct = 1;
        boolean bFound = false;

        int iCnt = 0;

        while (iCnt < Arr.length)
        {
            int iValue = Arr[iCnt];

            if ((iValue & 1) == 1)
            {
                iProduct = iProduct * iValue;
                bFound = true;
            }

            iCnt++;
        }

        if (bFound)
        {
            return iProduct;
        }

        return 0;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;

        System.out.print("Enter number of elements: ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter " + iSize + " elements");

        for (int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print("Enter element " + (iCnt + 1) + " : ");
            Arr[iCnt] = sobj.nextInt();
        }

        int iRet = Product(Arr);

        System.out.print("Product is : " + iRet);

        sobj.close();
    }
}