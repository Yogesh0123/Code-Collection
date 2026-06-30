/*
5. Write a program to check whether a number is positive, negative, or zero.
Input: 
Output:
*/

class Logic
{
    void checkSign(int iNo)
    {
        if (iNo < 0 ) 
        {
          System.out.println("Number is Negative : "+iNo); 
        }
        else if ( iNo > 0 ) 
        {
         System.out.println("Number is Positive : "+iNo);    
        }
        else
        {
            System.out.println("Number is Zero : "+iNo);  
        }
    }
}

class program5 
{
    public static void main(String[] args) 
    {
        Logic obj=new Logic();
        obj.checkSign(-8);
    }
}
