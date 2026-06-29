/*
1. Write a program to find the sum of digits of a number.
Input : 1234
Output: Sum Of Digits is : 10
*/
class Logic 
{
    void sumOfDigits(int iNum)
    {
        int iDigit =0;
        int iSum =0;

        while (iNum !=0) 
        {
            iDigit= iNum % 10;
            iSum= iSum + iDigit;
            iNum=iNum/10;
        }
        System.out.println("Sum Of Digits is : "+iSum);
    }
}
class program1 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }
    
}