
/*
Q2. Write a program to print numbers from N down to 1 in reverse order.
Input : 10
Output : 10 9 8 7 6 5 4 3 2 1
*/

#include <iostream>
using namespace std;

class Logic
{
public:
    void PrintReverse(int iNum)
    {
        while (iNum >= 1)
        {
            cout << iNum << "\t";
            iNum--;
        }
    }
};

int main()
{
    Logic obj;
    obj.PrintReverse(10);

    return 0;
}
