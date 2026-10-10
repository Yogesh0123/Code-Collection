
/*
Q2. Write a program to print all even numbers up to N.
Input : 20
Output : Even number: 2
         Even number: 4
         Even number: 6
         Even number: 8
         Even number: 10
         Even number: 12
         Even number: 14
         Even number: 16
         Even number: 18
         Even number: 20
*/

#include <iostream>
using namespace std;

class Logic
{
public:
    void PrintEvenNumbers(int iNo)
    {
        int iCnt = 1;

        while (iCnt <= iNo)
        {
            if (iCnt % 2 == 0)
            {
                cout << "Even number: " << iCnt << endl;
            }

            iCnt++;
        }
    }
};

int main()
{
    Logic ob;
    ob.PrintEvenNumbers(20);

    return 0;
}
