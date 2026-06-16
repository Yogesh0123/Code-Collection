import java.util.*;

class program143
{
    public static int Summation(int Arr[])
    {
        int iSum = 0;
        int iCnt = 0; 
        
        for(iCnt = 0; iCnt <= ; iCnt++)
        {
             iSum = iSum +Arr[iCnt];
        }
    }
        public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);
        int iCnt = 0;
        
        System.out.println("Enter the number elements : ");
        int iLength = sobj.nextInt();

        int Brr[] = new int[iLength];

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

        int iRet = Summation(Brr);

        System.out.println("Summentation is : "+iRet);
        Brr = null;
        System.gc();
    
    }
} 

//code purna kara 