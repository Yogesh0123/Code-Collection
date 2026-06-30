/*
Q4. Write a program to find the sum of even and odd digits separately in a number.
Input : 123456
Output : Sum of Even Digits: 12
         Sum of Odd Digits: 9
*/
class Logic
{
    void sumEvenOddDigits(int iNo)
    {
        int iDigit = 0;
        int iEvenSum = 0;
        int iOddSum = 0;
        
        while (iNo !=0 ) 
        {
            iDigit = iNo % 10;

            if (iDigit %2 ==0) 
            {
              iEvenSum = iEvenSum + iDigit; 
            }
            else
            {
              iOddSum = iOddSum + iDigit; 
            }
            iNo = iNo/10;
        }
        System.out.println("Sum of Even Digits: "+iEvenSum);
        System.out.println("Sum of Odd Digits: "+iOddSum);
    }
}
class program4 
{
    public static void main(String[] args) 
    {
        Logic obj=new Logic();
        obj.sumEvenOddDigits(123456);
    }
    
}
