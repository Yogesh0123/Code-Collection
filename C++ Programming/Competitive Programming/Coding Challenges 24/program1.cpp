
/*
Q1. Write a program to calculate the product of digits of a number.
Input : 234
Output : Answer is : 24
*/

#include <iostream>
using namespace std;

class Logic
{
public:
    void ProductOfDigits(int iNum)
    {
        int iProduct = 1;

        do
        {
            iProduct *= iNum % 10;
            iNum /= 10;
        }
        while (iNum != 0);

        cout << "Answer is : " << iProduct << endl;
    }
};

int main()
{
    Logic obj;
    obj.ProductOfDigits(234);

    return 0;
}
