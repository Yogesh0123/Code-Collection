
/*
Q2. Write a program to count how many even and odd numbers are present between 1 and N.
Input: 10
Output:
Even Numbers:
2 4 6 8 10
Odd Numbers:
1 3 5 7 9
Even numbers count is : 5
Odd numbers count is : 5
*/

#include <iostream>
using namespace std;

class Logic
{
public:
    void CountEvenOddRange(int iNum)
    {
        int iEvenCount = iNum / 2;
        int iOddCount = (iNum + 1) / 2;

        cout << "Even Numbers:" << endl;
        for (int i = 1; i <= iNum; i++)
        {
            if (i % 2 == 0)
                cout << i << endl;
        }

        cout << "\nOdd Numbers:" << endl;
        for (int i = 1; i <= iNum; i++)
        {
            if (i % 2 != 0)
                cout << i << endl;
        }

        cout << "\nEven numbers count is : " << iEvenCount << endl;
        cout << "Odd numbers count is : " << iOddCount << endl;
    }
};

int main()
{
    Logic obj;
    obj.CountEvenOddRange(10);

    return 0;
}
