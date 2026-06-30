/* 
3. Write a program to print all odd numbers up to N.
Input : 20
Output : Odd Numbers 1
         Odd Numbers 3
         Odd Numbers 5
         Odd Numbers 7
         Odd Numbers 9
         Odd Numbers 11
         Odd Numbers 13
         Odd Numbers 15
         Odd Numbers 17
         Odd Numbers 19
*/

class Logic
{
    void PrintOddNumbers (int iNo)
    {
        int iCnt =0;
        for( iCnt=0; iCnt <= iNo; iCnt++)
        {
            if (iCnt % 2==1) 
            {
                System.out.println("Odd Numbers "+iCnt);    
            }
        }
    }
}
class program3 
{
    public static void main(String[] args) 
    {
    Logic obj=new Logic();
    obj.PrintOddNumbers(20);
    }
}
