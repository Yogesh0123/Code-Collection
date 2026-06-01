//Type 2
import java.util.Scanner;

class program40
{
     void CheckDivisible(int iNo)
    {
        if ((iNo % 3 ==0 )&&(iNo % 5==0)) 
        {
            System.out.println("Number Is Divisible By 3 & 5 ");
        }
        else
        {
            System.out.println("Number Is Not Divisible By 3 & 5 ");
        }
    }
    public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);

        int iValue =0;

        System.out.print("Enter number: ");
        iValue=sobj.nextInt();

        CheckDivisible(iValue); //Error 

    }    
}
