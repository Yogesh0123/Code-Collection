/*
3. Accept N numbers from user and return the difference between largest
and smallest number.
Input : 6
Elements :85 66 3 66 93 88
Output : 90 (93 -3)
*/

import java.util.*;

class Program3
{
    static int Difference(int Arr[])
    {
        Arrays.sort(Arr);

        int iSmallest = Arr[0];
        int iLargest = Arr[Arr.length - 1];

        return iLargest - iSmallest;
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

        System.out.println("Difference is : " + Difference(Arr));
    }
}