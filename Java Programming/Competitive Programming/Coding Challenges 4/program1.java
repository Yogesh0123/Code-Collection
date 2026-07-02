/*
1. Write a program to find the sum of all even numbers up to N.
Input: 10
Output: Sum is : 30
*/
class Logic
{
    void sumEvenNumbers(int iNum)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <=iNum; iCnt++)
        {
            if (iCnt % 2==0 ) 
            {
             iSum = iSum + iCnt;
            }
        }
        System.out.println("Sum is : "+iSum);
    }
}
class program1 
{
    public static void main(String[] args) 
    {
        Logic obj=new Logic();
        obj.sumEvenNumbers(10);
    }
    
}