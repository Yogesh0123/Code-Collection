/*
Q2. Write a program to print all even numbers up to N.
Input : 20
Output : Even number: 2
         Even number: 4
         Even number: 6
         Even number: 8
         Even number: 10
         Even number: 12
         Even number: 14
         Even number: 16
         Even number: 18
         Even number: 20
*/

class Logic
{
    void PrintEvenNumbers(int iNo)
    {
        int iCnt = 0;

        for (iCnt = 1; iCnt <= iNo ; iCnt++)
        {
            if (iCnt %2 ==0) 
            {
                System.out.println(" Even number: "+iCnt);   
            }
        }
    }
}
class program2 
{
 public static void main(String[] args) 
 {
    Logic ob=new Logic();
    ob.PrintEvenNumbers(20);   
 }   
}
