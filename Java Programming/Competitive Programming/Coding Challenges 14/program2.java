// 2. Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height)
// Input : 5.3 9.78
// Output : 51.834

import java.util.Scanner;

class program2
{
    static double ReactArea(double[] dValue)
    {
        double dArea = dValue[0] * dValue[1];

        return dArea;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        double[] dValue = new double[2];

        System.out.print("Enter width: ");
        dValue[0] = sobj.nextDouble();

        System.out.print("Enter height: ");
        dValue[1] = sobj.nextDouble();

        double dRet = ReactArea(dValue);

        System.out.printf("Area is : %.3f", dRet);

        sobj.close();
    }
}