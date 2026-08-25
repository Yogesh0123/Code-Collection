// 4. Accept one number and check whether it is divisible by 5 or not.

import java.util.Scanner;

class Program4
{
    static boolean Check(int iNo)
    {
        if ((iNo % 5) == 0)
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

        System.out.print("Enter Number: ");
        iValue = sobj.nextInt();

        bRet = Check(iValue);

        if (bRet == true)
        {
            System.out.println("Divisible by 5");
        }
        else
        {
            System.out.println("Not Divisible by 5");
        }

        sobj.close();
    }
}