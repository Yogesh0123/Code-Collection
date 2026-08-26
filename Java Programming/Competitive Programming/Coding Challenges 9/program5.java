//5.Accept number from user and check whether number is even or odd.
//Output:  Enter Number : 11
//         Number is odd
//              &
//         Enter Number : 2
//         Number is Even

import java.util.Scanner;

class program5
{
    static boolean ChkEven(int iNo)
    {
        //Logic
        if ((iNo % 2) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.print("Enter Number : ");
        iValue = sobj.nextInt();

        bRet = ChkEven(iValue);

        //Display result
        if (bRet == true)
        {
            System.out.print("Number is Even");
        }
        else
        {
            System.out.print("Number is odd");
        }

        sobj.close();
    }
}