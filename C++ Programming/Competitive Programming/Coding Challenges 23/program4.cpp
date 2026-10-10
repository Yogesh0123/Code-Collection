
/*
4. Write a program to find the largest digit in a given number.
Input : 83429
Output : Largest number is : 9
*/

#include <iostream>
using namespace std;

class Logic
{
public:
    void FindLargestDigit(int iNum)
    {
        int iLargest = 0;

        for (; iNum > 0; iNum /= 10)
        {
            int iDigit = iNum % 10;

            iLargest = (iDigit > iLargest) ? iDigit : iLargest;
        }

        cout << "Largest number is : " << iLargest << endl;
    }
};

int main()
{
    Logic obj;
    obj.FindLargestDigit(83429);

    return 0;
}
