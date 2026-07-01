/*
Q5. Write a program to calculate the power of a number using loops.
*/
class Logic
{
    void calculatePower(int base , int exp)
    {
        int iCnt = 0;
        int result = 1;

        for(iCnt=0; iCnt <= exp; iCnt++)
        {
            result = result * base;
        }
        System.out.println("Power is : " + result);
    }
}
class program5 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.calculatePower(2,5);
    }
}
