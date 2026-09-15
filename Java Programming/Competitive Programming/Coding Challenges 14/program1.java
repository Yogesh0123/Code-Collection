// 1.Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14. (Area = PI * Radius * Radius)
// Input : 5.3
// Output : 88.2026
// Input : 10.4
// Output : 339.6224

import java.util.Scanner;

class program1
{
    static double CircleArea(float fRadius)
    {
        double dArea;

        dArea = 3.14 * Math.pow(fRadius, 2);

        return dArea;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        float fValue = 0.0f;
        double dRet = 0.0;

        System.out.print("Enter radius: ");
        fValue = sobj.nextFloat();

        dRet = CircleArea(fValue);

        System.out.print("Area of circle is: " + dRet);

        sobj.close();
    }
}