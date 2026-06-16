//input:   4
//output:  
import java.util.*;

class program191
{
    public static void Display(int iRow, int iCol)
    {
       int i=0;
       int j=0;

       for(i=1;i<=iRow;i++)
       {
       for(j=1;j<=iCol  ;j++)
       {
        System.out.print("*\t");
       }
       System.out.println();
    }

    }

    public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=1,iValue2=0;

        System.out.println("Enter number of rows: ");
        iValue =sobj.nextInt();

        System.out.println("Enter number of columns: ");
        iValue2 =sobj.nextInt();
    
        Display(iValue,iValue2);//function call

    }
    
}