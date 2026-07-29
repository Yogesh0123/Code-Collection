/*
4. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 5 iCol = 5
Output : 1  2  3  4  5
        -1 -2 -3 -4 -5
         1  2  3  4  5
        -1 -2 -3 -4 -5
         1  2  3  4  5
*/

import java.util.Scanner;

class program19
{
    public static void Pattern(int iRow,int iCol) 
    {
        int i=1;
        int j=0;

        do 
        {
            j=1;
            int iCnt=1;
            do 
            {
             if (i % 2 != 0) 
                {
                    System.out.print(iCnt+"\t");   
                }   
             else
                {
                    System.out.print(-iCnt+"\t"); 
                }
            iCnt++;
            j++;
            } 
            while (j<=iCol);
            System.out.println();
            i++;
        } 
        while (i<=iRow);
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
