import java.util.Scanner;

class program1
{
    static void Number(int iNo)
    {
        String sResult;

        if (iNo < 0)
        {
            sResult = "Invalid Number";
        }
        else if (iNo <= 50)
        {
            sResult = "Small Number";
        }
        else if (iNo < 100)
        {
            sResult = "Medium Number";
        }
        else
        {
            sResult = "Large Number";
        }

        System.out.println("\n" + sResult + ": " + iNo + " \n");
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("\nEnter number : ");
        iValue = sobj.nextInt();

        Number(iValue);

        sobj.close();
    }
}