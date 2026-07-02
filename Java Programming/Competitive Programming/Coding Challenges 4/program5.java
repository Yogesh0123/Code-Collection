/*
5. Write a program to find the smallest digit in a given number.
Input : 45287
Output : Smallest number is : 2
*/
class Logic 
{
    void findSmallestDigit(int iNum)
    {
        int iCnt=0;
        int iSmallest= iNum %10;
        int iDigit=0;

        for(iCnt=0;iNum !=0; iNum=iNum/10)
        {
            iDigit= iNum % 10;
            if (iDigit < iSmallest) 
            {
                iSmallest=iDigit;
            }
        }
        System.out.println("Smallest number is : "+iSmallest);
    }
}
class program5 
{
    public static void main(String[] args) 
    {
        Logic obj= new Logic();
        obj.findSmallestDigit(45287);
    }
}
