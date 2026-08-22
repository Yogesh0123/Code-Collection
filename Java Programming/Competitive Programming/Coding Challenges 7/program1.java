import java.util.*;

class program1 
{
    public static void Pattern(int iRow,int iCol) 
    {
        int i=1,j=0;
        
        while (i <= iRow) 
        {
            j=1;

            while (j <= i) 
            {
                System.out.print("*\t");
                j++;
            }
            System.out.println();
            i++;
        }
    }

    public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);

        int iValue1=0,iValue2=0;

        System.out.println("Enter number of rows :");
        iValue1=sobj.nextInt();

        System.out.println("Enter number of columns :");
        iValue2=sobj.nextInt();

        Pattern(iValue1, iValue2);

        sobj.close();
    }
}