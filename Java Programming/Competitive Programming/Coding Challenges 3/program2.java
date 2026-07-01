/*
Q2.Write a program to display the grade of a student based on marks.
Input : 89
Output :Congratulations Your Pass Grade 'B': 89%.
*/
class Logic
{
    void displayGrade(int marks)
    {
        if (marks >= 90) 
        {
            System.out.println("Congratulations Your Pass Grade 'A':  "+marks+"%.");    
        }
        else if (marks >= 75) 
        {
             System.out.println("Congratulations Your Pass Grade 'B': "+marks+"%."); 
        }
        else if (marks >= 60) 
        {
             System.out.println("Congratulations Your Pass Grade 'C':  "+marks+"%."); 
        }
        else if (marks >= 35) 
        {
             System.out.println("Congratulations Your Pass Grade 'D':  "+marks+"%."); 
        }
        else
        {
            System.out.println("I Am Sorry Your Failed:  "+marks+"%."); 
        }
    }
}
class program2 
{
    public static void main(String[] args) 
    {
        Logic obj=new Logic();
        obj.displayGrade(89);    
    }
}
