//3.Accept on number from user if number is less than 10 then print “Hello” otherwise print “Demo”.

// Output: Enter number: 5
//         Hello
//
//         Enter number: 11
//         Demo

import java.util.Scanner;

class program3
{
    static void Display(int iNo)
    {
        if (iNo < 10)
        {
            System.out.print("Hello");
        }
        else
        {
            System.out.print("Demo");
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