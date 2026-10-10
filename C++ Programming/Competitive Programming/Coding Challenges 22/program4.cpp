
/*
Q4. Write a program to print each digit of a number separately.
Input : 9876
Output: Current Digit : 6
        Current Digit : 7
        Current Digit : 8
        Current Digit : 9
*/

#include <iostream>
using namespace std;

class Logic
{
public:
    void PrintDigits(int num)
    {
        for (; num != 0; num /= 10)
        {
            cout << "Current Digit : " << num % 10 << endl;
        }
    }
};

int main()
{
    Logic obj;
    obj.PrintDigits(9876);

    return 0;
}
