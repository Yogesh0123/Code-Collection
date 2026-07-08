/*
Q1.Accept number from user and display below pattern.
Input : 5 
Output : A B C D E
*/

import java.util.Scanner;

class Logic
{
    void Pattern(int iNo)
    {
        int i = 0;
        char ch='A';

        System.out.println("Output is : ");
        for(i = 1; i<= iNo ; i++)
        {
            System.out.print(ch+"\t");
            ch++;
        }
    }
}

class program1
{
    public static void main(String[] args) 
    {
      int iValue = 0;
      Scanner sobj=new Scanner(System.in);

    System.out.println("Enter number of elements : ");
    iValue=sobj.nextInt();

    Logic obj = new Logic ();

    obj.Pattern(iValue);
    }
}