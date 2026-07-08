/*
Q4. Accept number from user and display below pattern.
Input : 4
Output : # 1 * # 2 * # 3 * # 4 *
*/
import java.util.Scanner;
class Logic
{
void Pattern(int iNo)
{
    int i =0;
    
    for ( i = 1; i <= iNo; i++)
    {
        System.out.print("#\t"+i+"\t*\t");
    }
    
}
}
class program4 
{
    public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter number of elements: ");
        iValue=sobj.nextInt();

        Logic obj=new Logic();

        obj.Pattern(iValue);

        sobj.close();
    }
    
}
