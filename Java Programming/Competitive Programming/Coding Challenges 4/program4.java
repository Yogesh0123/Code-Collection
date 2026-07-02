/*
4. Write a program to find the largest digit in a given number.
Input : 83429
Output : Largest number is : 9
*/
class Logic
{
    void findLargestDigit(int iNum)
    {
        int iLargest = 0;
        int iCnt = 0;
        int iDigit =0;

        for(iCnt =0; iNum != 0; iNum =iNum /10)
        {
            iDigit = iNum % 10;
            if (iDigit > iLargest) 
            {
                iLargest = iDigit;
            }
        }
          System.out.println("Largest number is : "+iLargest);

    }
}
class program4 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }
    
}
