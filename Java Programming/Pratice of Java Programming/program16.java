/*
Q1. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output :1 2 3 4
        5 6 7 8
        9 1 2 3
        4 5 6 7
*/

import java.util.Scanner;

class program16
{
        public static void Pattern(int iRow,int iCol)
        {
                int i=1;
                int j=1;
                int iCnt=1;

                do 
                {
                        j=1;

                        do
                        {
                                System.out.print(iCnt+"\t");
                                iCnt++;
                                if (iCnt > 9) 
                                {
                                        iCnt=1;
                                }
                                j++;
                        }
                        while (j <= iCol);
                        {
                                System.out.println();
                                i++;
                        }
                }   while (i <= iRow);
              
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