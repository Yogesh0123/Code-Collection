import java.util.Scanner;

class program1
{
    public static void Pattern(int iRow, int iCol) 
    {
        int i=1;
        int j=0;

        do {
            j=1;
            do {
                if (j <= i)
            {
                System.out.print("* ");
            }
            else
            {
                System.out.print("# ");
            }  
            j++;
            } while (j <=iRow);
            System.out.println();
            i++;
        } 
        while (i<=iCol);
    }
    public static void main(String[] args) 
    {
     Scanner sobj=new Scanner(System.in);
     int iValue1 = 0, iValue2 = 0;

     System.out.print("Enter the number of Rows :");
     iValue1=sobj.nextInt();

     System.out.print("Enter the number of Rows :");
     iValue2=sobj.nextInt();

     Pattern(iValue1, iValue2);

     sobj.close();
    }
}