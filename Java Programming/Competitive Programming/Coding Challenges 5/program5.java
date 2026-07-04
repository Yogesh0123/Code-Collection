/*Q5. Write a program to print all numbers from 1 to N that are divisible by both 2 and 3.
Input : 30
Output: 6
        12
        18
        24
        30
*/

class Logic
{
    static void printDivisibleBy2and3(int n)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= n; iCnt++)
        {
            if(iCnt % 2 == 0 && iCnt % 3 == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

public class program5
{
    public static void main(String args[])
    {
        Logic.printDivisibleBy2and3(30);
    }
}