/*
4. Write a program which accept temperature in Fahrenheit and convert it into celsius.
(1 celsius = (Fahrenheit -32) * (5/9))
Input : 10
Output : -12.222222
Input : 34
Output : 1.111111
*/

import java.util.Scanner;

class program4
{
    static double FhtoCs(float fTemp)
    {
        double dDifference = fTemp - 32;
        double dCelsius = (dDifference * 5) / 9;

        return dCelsius;
    }

    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        float fValue = 0.0f;
        double dRet = 0.0;

        System.out.print("Enter temperature in Fahrenheit: ");
        fValue = sobj.nextFloat();

        dRet = FhtoCs(fValue);

        System.out.print("Temperature in Celsius is : " + dRet);

        sobj.close();
    }
}