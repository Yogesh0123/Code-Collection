/*
Q2. Write a program to count how many even and odd numbers are present between 1 and N.
Input: 
Output:
 */
class Logic
{
    void countEvenOddRange(int iNum)
    {
        int iCnt =0;
        int iEvenCount=0;
        int iOddCount=0;

        System.out.println("Even Numbers: ");
        for (iCnt=1;iCnt <= iNum;iCnt++)
        {
            if (iCnt % 2 == 0) 
            {
                System.out.println(iCnt+" ");
                iEvenCount++;
            }
        }

        System.out.println();

        System.out.println("Odd Numbers: ");
        for (iCnt=1;iCnt <= iNum;iCnt++)
        {
            if (iCnt % 2 != 0) 
            {
                System.out.println(iCnt+" ");
                iOddCount++;
            }
        }
        System.out.println();

        System.out.println("Even numbers count is : "+iEvenCount);
        System.out.println("Odd numbers count is : "+iOddCount);
    }
}
class program2 
{
    public static void main(String[] args) 
    {
        Logic obj=new Logic();
        obj.countEvenOddRange(10);
    }
    
}
