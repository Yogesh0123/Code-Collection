
/*
Q3. Write a program to check whether a number is divisible by 5 and 11 or not.
Input : 55
Output : Number is Divisible by 5 and 11: 55
*/

#include <iostream>
using namespace std;

class Logic
{
public:
    void CheckDivisible(int num)
    {
        bool divisibleBy5 = (num % 5 == 0);
        bool divisibleBy11 = (num % 11 == 0);

        if (divisibleBy5)
        {
            if (divisibleBy11)
            {
                cout << "Number is Divisible by 5 and 11: "
                     << num << endl;
                return;
            }
        }

        cout << "Number is Not Divisible by 5 and 11: "
             << num << endl;
    }
};

int main()
{
    Logic obj;
    obj.CheckDivisible(55);

    return 0;
}
