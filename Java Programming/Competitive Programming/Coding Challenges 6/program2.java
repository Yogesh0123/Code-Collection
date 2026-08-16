import java.util.Scanner;

class program2 
 {
    public static void Pattern(int iRow, int iCol) 
    {
        int i=1;
        int j=0;
        do {
            j=1;
            do {
                if (j <= iCol - i +1) 
                {
                    System.out.print("* ");
                }
                else
                {
                    System.out.print("# ");
                }
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

        System.out.println("Enter The Number of Row: ");
        iValue1=sobj.nextInt();

        System.out.println("Enter The Number of Column: ");
        iValue2=sobj.nextInt();

        Pattern(iValue1,iValue2);

        sobj.close();
        
    }
}
