//Q5.Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.
// Input : E Output : TRUE
// Input : d Output : FALSE

import java.util.Scanner;

class program5
{
    static boolean ChkVowel(char ch)
    {
        if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') ||
            (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
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

        char cValue = '\0';
        boolean bRet = false;

        System.out.println("Enter charecter");
        cValue = sobj.next().charAt(0);

        bRet = ChkVowel(cValue);

        if (bRet == true)
        {
            System.out.print("It is Vowel");
        }
        else
        {
            System.out.print("It is not Vowel");
        }

        sobj.close();
    }
}