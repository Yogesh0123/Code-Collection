/*
3. Accept N numbers from user and display all such elements which are
even and divisible by 5.
Input : N : 6

Elements : 85 66 3 80 93 88

Output : 80
*/

import java.util.Scanner;

class program3
{
    static void Display(int Arr[])
    {
        for (int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            boolean bEven = (Arr[iCnt] % 2 == 0);

            if (bEven)
            {
                if (Arr[iCnt] % 5 == 0)
                {
                    System.out.print(Arr[iCnt] + "\t");
                }
            }
        }
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;

        System.out.print("Enter Number of Elements: ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter " + iSize + " elements");

        for (int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print("Enter element " + (iCnt + 1) + " : ");
            Arr[iCnt] = sobj.nextInt();
        }

        Display(Arr);

        sobj.close();
    }
}