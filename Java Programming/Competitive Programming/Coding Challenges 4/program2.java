/*
Q2. Write a program to print numbers from N down to 1 in reverse order.
Input : 10
Output : 10 9 8 7 6 5 4 3 2 1
*/
class Logic
{
    void printReverse(int iNum)
    {
        int iCnt =0;
       
        for(iCnt = iNum; iCnt>=1;iCnt--)
        {
            System.out.print(iCnt+"\t"); 
        }
    }
}
class program2 
{
    public static void main(String[] args) 
    {
           Logic obj = new Logic();
           obj.printReverse(10);
    }
    
}
