
/*
5. Write a program to find the smallest digit in a given number.
Input : 45287
Output : Smallest number is : 2
*/

#include <iostream>
using namespace std;

class Logic
{
public:
    void FindSmallestDigit(int iNum)
    {
        int iSmallest = iNum % 10;

        for (iNum /= 10; iNum != 0; iNum /= 10)
        {
            int iDigit = iNum % 10;

            iSmallest = (iDigit < iSmallest) ? iDigit : iSmallest;
        }

        cout << "Smallest number is : " << iSmallest << endl;
    }
};

int main()
{
    Logic obj;
    obj.FindSmallestDigit(45287);

    return 0;
}
