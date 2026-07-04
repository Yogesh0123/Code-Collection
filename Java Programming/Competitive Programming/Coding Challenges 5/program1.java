/* 
Q1. Write a program to calculate the product of digits of a number.
Input : 234
Output : Answer is : 24
*/

class program1{ 
static void productofDigits(int iNum)
    {
        int iDigits =0 ;
        int iCnt =0;
        int iProduct =1;

        for(iCnt=0;iNum !=0; iNum=iNum/10)
        {
            iDigits=iNum % 10;
            iProduct= iProduct * iDigits;
        }
        System.out.println("Answer is : "+iProduct);
    }

    public static void main(String[] args) 
    {
         int iNum = 234;
         productofDigits(iNum);
    }
    
}