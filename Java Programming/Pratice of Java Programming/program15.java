import java.util.Scanner;

class program10 
{
    public static void Pattern(int iRow,int iCol) 
    {
        int i=0;
        int j=0;
        int iCnt=1;

        System.out.println("Output: ");
        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++)
            {
                System.out.print(iCnt+"\t");
                iCnt++;
            }
             System.out.println();
        }
    }
     public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);
        int iValue1=0,iValue2=0;

        System.out.print("Enter Number of Rows: ");
        iValue1=sobj.nextInt();
        
        System.out.print("Enter Number of Columns: ");
        iValue2=sobj.nextInt();

        Pattern(iValue1,iValue2);

        sobj.close();
    }
    
}
