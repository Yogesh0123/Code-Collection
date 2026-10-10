
/*
Q4. Write a program to find the sum of even and odd digits separately in a number.
Input : 123456
Output : Sum of Even Digits: 12
         Sum of Odd Digits: 9
*/

#include <iostream>
using namespace std;

class Logic
{
public:
    void SumEvenOddDigits(int iNo)
    {
        int iEvenSum = 0;
        int iOddSum = 0;

        for (; iNo > 0; iNo /= 10)
        {
            int iDigit = iNo % 10;

            (iDigit % 2 == 0) ? iEvenSum += iDigit : iOddSum += iDigit;
        }

        cout << "Sum of Even Digits: " << iEvenSum << endl;
        cout << "Sum of Odd Digits: " << iOddSum << endl;
    }
};

int main()
{
    Logic obj;
    obj.SumEvenOddDigits(123456);

    return 0;
}
