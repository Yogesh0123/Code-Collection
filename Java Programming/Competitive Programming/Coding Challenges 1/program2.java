/*
Q2. Write a program to check whether a number is a palindrome or not.
Input: 121
Output: This is a Palindrome Number: 121
*/
class Logic 
{
    void checkPalindrome(int iNum)
    {
        int temp = iNum;
        int iDigit=0;
        int iRev=0;
        while (iNum != 0) 
        {
         iDigit=iNum % 10;
         iRev= iRev * 10 + iDigit;
         iNum = iNum /10;   
        }
        if (temp== iRev) 
        {
            System.out.println("This is a Palindrome Number: "+iRev);
        }
        else
        {
            System.out.println("This is Not Palindrome Number: "+iRev);
        }
        
    }
}
class program2 
{
    public static void main(String[] args) 
    {
        Logic obj=new Logic ();
        obj.checkPalindrome(121);
    }
    
}
