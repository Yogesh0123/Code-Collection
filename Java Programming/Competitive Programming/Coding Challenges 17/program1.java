/*
1.Write a program which accept number from user and display its digits in reverse
order.
Input : 2395
Output : 5
9
3
2
Input : 1018
Output : 8
1
0
1
Input : -1018
Output : 8
1
0
1
Input : 9000
Output : 0
0
0
9
*/

import java.util.Scanner;

class program1
{
    static void DisplayDigit(int iNo)
    {
        String str = Integer.toString(iNo);

        if (str.charAt(0) == '-')
        {
            str = str.substring(1);
        }

        for (int i = str.length() - 1; i >= 0; i--)
        {
            System.out.println(str.charAt(i));
        }
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("Enter number : ");
        iValue = sobj.nextInt();

        DisplayDigit(iValue);

        sobj.close();
    }
}