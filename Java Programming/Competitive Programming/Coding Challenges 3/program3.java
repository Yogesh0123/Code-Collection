/*
Q3.Write a program to check whether a number is divisible by 5 and 11 or not.
Input : 55
Output : Number is Divisible by 5 and 11: 55
*/
class Logic 
{
    void checkDivisible(int num)
    {
        if (num %5 ==0 && num% 11 == 0) 
        {
            System.out.println("Number is Divisible by 5 and 11: "+num);
            
        }
        else
        {
             System.out.println("Number is Not Divisible by 5 and 11: "+num);
        }

    }
}
class program3 
{
    public static void main(String[] args) 
    {
        Logic obj=new Logic();
        obj.checkDivisible(55);
    }
}
