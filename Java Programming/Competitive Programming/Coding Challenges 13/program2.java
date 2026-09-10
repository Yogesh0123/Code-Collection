//2. Accept amount in US dollar and return its corresponding value in Indian currency.
//Consider 1$ as 70 rupees.
//Output is:
// Input : 10
// Output : 700
// Input : 3
// Output : 210
// Input : 1200
// Output : 84000

import java.util.Scanner;

class program2
{
    static int DollarToINR(int iNo)
    {
        return iNo * 70;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.print("Enter number of USD: ");
        iValue = sobj.nextInt();

        iRet = DollarToINR(iValue);

        System.out.print("Value in INR is " + iRet);

        sobj.close();
    }
}