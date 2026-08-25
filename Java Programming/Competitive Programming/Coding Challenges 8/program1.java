// 1. Program to divide two numbers

class Program1
{
    static int Divide(int iNo1, int iNo2)
    {
        int iAns = 0;

        if (iNo2 == 0)
        {
            return -1;
        }

        iAns = iNo1 / iNo2;
        return iAns;
    }

    public static void main(String[] args)
    {
        int iValue1 = 15;
        int iValue2 = 5;
        int iRet = 0;

        iRet = Divide(iValue1, iValue2);

        System.out.println("Division is " + iRet);
    }
}