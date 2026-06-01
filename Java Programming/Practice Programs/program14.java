
import java.util.Scanner;

class NumberX
{
    public void DisplayFactors(int iNo) 
    {
        //Logic 
        int iCnt =0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if ((iNo % iCnt)==0) 
            {
                System.out.println(iCnt);
            }
        }
    }
}

class program47
{
    public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);

        int iValue =0;

        System.out.print("Enter number: ");
        iValue=sobj.nextInt();

        NumberX nobj=new NumberX();
        
        nobj.DisplayFactors(iValue);
         sobj.close();
    }    
}
//Time Complexcity : O(N / 2)
//where N >= 0