/*
Q2. Accept number from user and display below pattern.
Input : 5
Output : 5 # 4 # 3 # 2 # 1 #
*/

import java.util.Scanner;

class Logic
{
    void Pattern(int iNo)
    {
        int i =0;
        for(i=iNo;i>=1;i--)
        {
            System.out.print(i+"\t#\t");
        }
    }
}

class program2 
{
 public static void main(String[] args) 
 {
    Scanner sobj=new Scanner(System.in);
    int iValue = 0 ;

    System.out.print("Enter number of elements : ");
    iValue=sobj.nextInt();

    Logic obj=new Logic();

    obj.Pattern(iValue);

    sobj.close();
    
 }   
}
