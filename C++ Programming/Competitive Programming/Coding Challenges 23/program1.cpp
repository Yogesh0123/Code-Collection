
/*
1. Write a program to find the sum of all even numbers up to N.
Input: 10
Output: Sum is : 30
*/

#include <iostream>
using namespace std;

class Logic
{
public:
    void SumEvenNumbers(int iNum)
    {
        int iCnt = 1;
        int iSum = 0;

        while (iCnt <= iNum)
        {
            if (iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }

            iCnt++;
        }

        cout << "Sum is : " << iSum << endl;
    }
};

int main()
{
    Logic obj;
    obj.SumEvenNumbers(10);

    return 0;
}
