//Q4.Accept one character from user and convert case of that character.
//Input : a Output : A
//Input : D Output : d

import java.util.Scanner;

class program4
{
    static void DisplayConvert(char CValue)
    {
        if ((CValue >= 'a') && (CValue <= 'z'))
        {
            System.out.print((char)(CValue - 32));
        }
        else if ((CValue >= 'A') && (CValue <= 'Z'))
        {
            System.out.print((char)(CValue + 32));
        }
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        char cValue = '\0';

        System.out.println("Enter Character");
        cValue = sobj.next().charAt(0);

        DisplayConvert(cValue);

        sobj.close();
    }
}