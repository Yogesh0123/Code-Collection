/*3. Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)
Input: 5
Output: 5000

Input: 12
Output: 12000
*/

import java.util.Scanner;

class program3
{
    static int KMtoMeter(int iNo)
    {
        int iMeter = iNo * 1000;

        return iMeter;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.print("Enter distance: ");
        iValue = sobj.nextInt();

        iRet = KMtoMeter(iValue);

        System.out.print("Distance is meter is : " + iRet);

        sobj.close();
    }
}