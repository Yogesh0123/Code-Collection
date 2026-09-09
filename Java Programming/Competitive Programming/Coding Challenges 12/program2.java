// 2. Accept single digit number from user and print it into word.
// Input : 9
// Output : Nine
// Input : -3
// Output : Three
// Input : 12
// Output : Invalid Number

import java.util.Scanner;

class program2
{
    static void Display(int iNo)
    {
        String[] Arr = {
            "Zero", "One", "Two", "Three", "Four",
            "Five", "Six", "Seven", "Eight", "Nine"
        };

        if (iNo < 0)
        {
            iNo = -iNo;
        }

        System.out.print("Output is : ");

        if (iNo < Arr.length)
        {
            System.out.print(Arr[iNo]);
        }
        else
        {
            System.out.print("Invalid Number");
        }
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("Enter number: ");
        iValue = sobj.nextInt();

        Display(iValue);

        sobj.close();
    }
}