import java.util.Scanner;

class Logic
{
    void Pattern(int iRow, int iCol)
    {
        int i=0;
        int j=0;

        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++)
            {
                System.out.print("* ");
            }
            System.out.println("");
        }
    }
}

class program1
{
    public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);
        int iValue1=0,iValue2=0;

        System.out.print("Enter Number Of Rows: ");
        iValue1=sobj.nextInt();

        System.out.print("Enter Number Of Columns: ");
        iValue2=sobj.nextInt();

        Logic obj=new Logic();

        obj.Pattern(iValue1,iValue2);

        sobj.close();
        
    }
}