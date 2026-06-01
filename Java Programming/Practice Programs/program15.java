
import java.util.Scanner;

class NumberX
{
    public void SumFactors(int iNo) 
    {
        //Logic 
        int iCnt =0;
        int iSum =0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if ((iNo % iCnt)==0) 
            {
               iSum = iSum + iCnt;
            }
        }
        System.out.println("Summation Of Factors : "+iSum);
    }
}

class program48
{
    public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);

        int iValue =0;

        System.out.print("Enter number: ");
        iValue=sobj.nextInt();

        NumberX nobj=new NumberX();
        
        nobj.SumFactors(iValue);
         sobj.close();
    }    
}
//Time Complexcity : O(N / 2)
//where N >= 0