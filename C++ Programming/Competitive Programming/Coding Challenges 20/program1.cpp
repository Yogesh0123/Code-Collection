/*
1. Write a program to find the sum of digits of a number.
Input : 1234
Output: Sum Of Digits is : 10
*/

#include<iostream>
using namespace std;

class Logic
{
    public:
        int SumOfDigits(int iNum)
        {
            int iSum = 0;

            while(iNum > 0)
            {
                iSum += iNum % 10;
                iNum /= 10;
            }

            return iSum;
        }
};

int main()
{
    Logic obj;
    int iRet = 0;

    iRet = obj.SumOfDigits(1234);

    cout << "Sum Of Digits is : " << iRet;

    return 0;
}