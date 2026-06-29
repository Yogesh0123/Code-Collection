/*
Q4. Write a program to find the minimum of three numbers.
Input:3,7,2
Output: Minimum number is : 2
*/
class Logic
{
    void findMin(int a ,int b, int c)
    {
        if (a<b && a <c) 
        {
            System.out.println("Minimum number is : "+a);
        }
        else if (b<a && b<c) 
        {
            System.out.println("Minimum number is : "+b);
        }
        else
        {
             System.out.println("Minimum number is : "+c);
        }
    }
}
class program4 
{
    public static void main(String[] args) 
    {
        Logic obj=new Logic();
        obj.findMin(3,7,2);
    }
}


