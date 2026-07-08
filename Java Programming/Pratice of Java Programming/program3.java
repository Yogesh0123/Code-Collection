/*
3. Accept number from user and display below pattern.
Input : 5
Output : 1 * 2 * 3 * 4 * 5
*/

import java.util.Scanner;

class Logic
{
    void Pattern(int iNo)
    {
        int i =0;

        for(i=1; i<=iNo; i++)
        {
            System.out.print(""+i);
             if (i<iNo)
                {
                 System.out.print("\t*\t");
                }
        }
    }
}

class program3 
{
    public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);

        int iValue =0;

        System.out.print("Enter number of elements: ");
        iValue=sobj.nextInt();

        Logic obj=new Logic();

        obj.Pattern(iValue);

    }
    
}
