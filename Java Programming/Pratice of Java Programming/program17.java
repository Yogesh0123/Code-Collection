/*
2. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4  iCol = 4
Output :2 4 6 8
        1 3 5 7
        2 4 6 8
        1 3 5 7             
*/
import java.util.Scanner;

class program17

{
    public static void Pattern(int iRow,int iCol)
    {
        int i=1;
        int j=1;
        int iCnt=1;

        do {
            j=1;
            if (i % 2 !=0) 
            {
                iCnt=2;    
            }
            else
            {
                iCnt=1;
            }
            do 
            {
            System.out.print(iCnt+"\t");
            iCnt=iCnt+2;
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
