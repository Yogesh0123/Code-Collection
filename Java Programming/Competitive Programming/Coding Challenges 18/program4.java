/*
4. Accept N numbers from user and display all such elements which are divisible by 3 and 5.

Input : N : 6

Elements :85 66 3 15 93 88

Output : 15
*/

import java.util.Scanner;

class program4
{
    static void Display(int Arr[])
    {
        for (int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if (Arr[iCnt] % 3 == 0)
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

        System.out.print("Enter number of elements : ");
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