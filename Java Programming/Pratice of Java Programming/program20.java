import java.util.Scanner;

class program20
{
    public static void Pattern(int iRow,int iCol) 
    {
        int i =1;
        int j =0; 

        do {
              j=1;
              int iCnt=i;
            do 
            {
                System.out.print(iCnt+"\t");
                iCnt=iCnt+1;
                j++;
            } while (j<=iCol);
            System.out.println();
            i++;
        } while (i<=iRow);
    }
    public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);
        int iValue1=0,iValue2=0;
        
        System.out.println("Enter the number of Rows: ");
        iValue1=sobj.nextInt();

        System.out.println("Enter the number of Columns: ");
        iValue2=sobj.nextInt();

        Pattern(iValue1,iValue2);

        sobj.close();
    }
}
