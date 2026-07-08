/*
Q5. Accept number from user and display below pattern.
Input : 8
Output : 2 4 6 8 10 12 14 16
*/

import java.util.Scanner;

class Logic
{
    void Pattern(int iNo)
{
    int i = 0;

    for ( i = 1; i <=iNo; i++)
    {
      System.out.print(i*2+"\t");
    }

}
}

class program5 
{
     public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);

        int iValue =0;

        System.out.print("Enter number of elements: ");
        iValue=sobj.nextInt();

        Logic obj=new Logic();

        obj.Pattern(iValue);

        sobj.close();

    }
    
}
