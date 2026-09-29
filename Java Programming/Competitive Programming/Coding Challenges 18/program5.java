/*
5. Accept N numbers from user and display all such elements which are multiples of 11.
Input  : 6
Elements :85 66 3 55 93 88
Output : 66 55 88
*/

import java.util.Scanner;

class program5
{
    static void Display(int Arr[])
    {
        int iCnt = 0;

        while (iCnt < Arr.length)
        {
            int iRemainder = Arr[iCnt] % 11;

            if (iRemainder == 0)
            {
                System.out.print(Arr[iCnt] + "\t");
            }

            iCnt++;
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