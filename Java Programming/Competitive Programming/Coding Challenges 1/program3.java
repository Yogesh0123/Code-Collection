/*
Q3. Write a program to find the maximum of two numbers.
Input: 20,15
Output: Maximum Number is: 20
 */
class Logic 
{
    void findMax(int a , int b)
    {
        if (a>b) 
        {
          System.out.println("Maximum Number is: "+a);   
        }
        else
        {
         System.out.println("Maximum Number is: "+b);  
        }
    
    }
}

class program3 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.findMax(20,15);
    }
}
