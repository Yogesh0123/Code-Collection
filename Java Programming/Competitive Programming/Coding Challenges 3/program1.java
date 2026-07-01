/*
Q1.Write a program to check whether a given year is a leap year or not.
Input: 2024
Output: This is Leap Year: 2024
*/
class Logic 
{
    void checkLeapYear(int year)
    {
        if (year % 400 == 0) 
        {
            System.out.println("This is a Leap Year: "+year);    
        }
        else if (year % 100 == 0) 
        {
            System.out.println("This is not Leap Year: "+year);    
        }
        else if (year % 4 == 0 ) 
        {
            System.out.println("This is Leap Year: "+year);    
        }
        else
        {
            System.out.println("This is Not Leap Year: "+year);
        }
    }
}
class program1 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
    }
    
}