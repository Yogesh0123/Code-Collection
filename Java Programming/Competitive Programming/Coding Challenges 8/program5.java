// 5. Accept one number from user and print that number of * on screen.

class Program5
{
    static void Accept(int iNo)
    {
        int iCnt = 0;

        for (iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print("*\t");
        }
    }

    public static void main(String[] args)
    {
        int iValue = 0;

        iValue = 5;

        Accept(iValue);
    }
}