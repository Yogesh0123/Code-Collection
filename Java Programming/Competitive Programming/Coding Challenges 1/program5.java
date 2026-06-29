/*
5. Write a program to print the multiplication table of a number.
Input: 5
Output: 5 x 1 = 5
        5 x 2 = 10
        5 x 3 = 15
        5 x 4 = 20
        5 x 5 = 25
        5 x 6 = 30
        5 x 7 = 35
        5 x 8 = 40
        5 x 9 = 45
        5 x 10 = 50
*/
class Logic
{
    void printTable(int iNum)
    {
        int iCnt = 0;
        int iMult =0;

         for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(iNum + " x " + iCnt + " = " + (iNum * iCnt));
        }

    }
}
class program5 
{
    public static void main(String[] args) 
    {
        Logic obj=new Logic();
        obj.printTable(5);
    }
}
