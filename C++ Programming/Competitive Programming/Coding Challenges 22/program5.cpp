
/*
Q5. Write a program to calculate the power of a number using loops.
Input: Base = 2, Exponent = 5
Output: Power is : 32
*/

#include <iostream>
using namespace std;

class Logic
{
public:
    void CalculatePower(int base, int exp)
    {
        int result = 1;

        while (exp > 0)
        {
            result *= base;
            exp--;
        }

        cout << "Power is : " << result << endl;
    }
};

int main()
{
    Logic obj;
    obj.CalculatePower(2, 5);

    return 0;
}
