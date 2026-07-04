/*
Q3. Write a program to display all factors of a given number.
Input : 12 
Output : Factors are :  12
                        1
                        2
                        3
                        4
                        6
                        12
*/
class Logic 
{
     void displayFactors(int iNum)
    {
        int iCnt =0;

        System.out.println("Factors are :  "+iNum);
        for(iCnt = 1; iCnt <= iNum; iCnt++)
        {
            if (iNum % iCnt == 0 ) 
            {
                System.out.println(iCnt+" ");
            }
        }
    }
}
class program3 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.displayFactors(12);
    }
}
