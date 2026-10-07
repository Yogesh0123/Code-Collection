/*
5. Accept N numbers from user and display summation of digits of each number.
Input :6
Elements :8225 665 3 76 953 858
Output : 17 17 3 13 17 21
*/

import java.util.*;

class Program5
{
    static int DigitSum(int iNo)
    {
        String str = String.valueOf(Math.abs(iNo));

        int iSum = 0;

        for(int i = 0; i < str.length(); i++)
        {
            iSum = iSum + (str.charAt(i) - '0');
        }

        return iSum;
    }

    static void DigitsSum(int Arr[])
    {
        System.out.print("Result is : ");

        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(DigitSum(Arr[i]) + " ");
        }
    }

    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print("Enter element " + (i + 1) + " : ");
            Arr[i] = sobj.nextInt();
        }

        DigitsSum(Arr);
    }
}