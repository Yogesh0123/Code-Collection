import java.util.*;

class program141
{
        public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);
        int iCnt = 0;
        
        System.out.println("Enter the number elements : ");
        int iLength = sobj.nextInt();

        //Brr = (int *)malloc(sizeof(int)* iLength)//this is used in c.

        int Brr[] = new int[iLength];//size

        //Brr[] // this used in Python

        System.out.println("Enter the elements: ");

        for(iCnt = 0; iCnt <Brr.length;iCnt++)
        {
            Brr[iCnt]=sobj.nextInt();
        }
        System.out.println("Elements of the array are: ");
        for(iCnt = 0; iCnt <Brr.length;iCnt++)
        {
             System.out.println(Brr[iCnt]);
        }

    
    }
} 