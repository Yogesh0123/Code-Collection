
/*
4. Write a program to count total number of factors of a given number.
Input : 20
Output : Factors of : 20
         1
         2
         4
         5
         10
         20
         Total Factors are : 6
*/

#include <iostream>
using namespace std;

class Logic
{
public:
    void CountFactors(int iNum)
    {
        int iCount = 0;

        cout << "Factors of : " << iNum << endl;

        for (int i = 1; i * i <= iNum; i++)
        {
            if (iNum % i == 0)
            {
                cout << i << endl;
                iCount++;

                if (i != iNum / i)
                {
                    cout << iNum / i << endl;
                    iCount++;
                }
            }
        }

        cout << "Total Factors are : " << iCount << endl;
    }
};

int main()
{
    Logic obj;
    obj.CountFactors(20);

    return 0;
}
