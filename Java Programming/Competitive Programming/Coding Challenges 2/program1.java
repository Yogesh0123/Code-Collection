/*
Q1.Write a program to check whether a number is prime or not. 
Input : 11
Output : Prime Number : 11
*/
class Logic
{
    void checkPrime(int iNum)
    {
           int i = 0;

            if (iNum <=1) 
             {
             System.out.println("Not Prime Number");
             return;
            }

           for(i = 2 ; i < iNum ; i++)
           {
            if (iNum % i == 0) 
            {
                System.out.println("Not Prime Number: "+iNum);
                return;    
            }
           }
           System.out.println("Prime Number: "+iNum);

    }
}
class program1 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.checkPrime(0);
    }
    
}