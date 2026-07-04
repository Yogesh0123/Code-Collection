/*
4. Write a program to count total number of factors of a given number.
Input : 20
Output : Factors of : 20
                      1
                      2
                      4
                      5
                      10
                      20
                      Total Factors are : 6
    */
class Logic
{
    void countFactors(int iNum)
    {
        int iCnt = 0;
        int iCount = 0;

        System.out.println("Factors of : " + iNum);

        for(iCnt = 1; iCnt <= iNum; iCnt++)
        {
            if(iNum % iCnt == 0)
            {
                System.out.println(iCnt);
                iCount++;
            }
        }

        System.out.println("Total Factors are : " + iCount);
    }
}
class program4
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.countFactors(20);
    }
}
