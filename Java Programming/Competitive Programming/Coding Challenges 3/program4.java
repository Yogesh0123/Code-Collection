/*
Q4. Write a program to print each digit of a number separately.
Input : 9876
Output: Current Digit : 6
        Current Digit : 7
        Current Digit : 8
        Current Digit : 9
*/
class Logic
{
    void printDigits(int num)
    {
        int iDigit =0;

        for(;num !=0 ;num = num/10)
        {
            iDigit= num % 10;
            System.out.println("Current Digit : "+iDigit);
        }

    }
}
class program4 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic ();
        obj.printDigits(9876);   
    }
    
}
