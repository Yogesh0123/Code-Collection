/*
1. Accept N numbers from user and return the largest number.
Input :6
Elements :85 66 3 66 93 88
Output :93
*/
import java.util.*;

class Program
{
    static int Maximum(int Arr[])
    {
        int iMax = Arr[0];

        for(int i = 1; i < Arr.length; i++)
        {
            iMax = Math.max(iMax, Arr[i]);
        }

        return iMax;
    }

    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter " + iSize + " elements:");

        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print("Enter element " + (i + 1) + " : ");
            Arr[i] = sobj.nextInt();
        }

        int iRet = Maximum(Arr);

        System.out.println("Largest Number is : " + iRet);
    }
}