
/*
3. Write a program to print all odd numbers up to N.
Input : 20
Output : Odd Numbers 1
         Odd Numbers 3
         Odd Numbers 5
         Odd Numbers 7
         Odd Numbers 9
         Odd Numbers 11
         Odd Numbers 13
         Odd Numbers 15
         Odd Numbers 17
         Odd Numbers 19
*/

#include <iostream>
using namespace std;

class Logic
{
public:
    void PrintOddNumbers(int iNo)
    {
        int iCnt = 0;

        while (iCnt <= iNo)
        {
            if (iCnt % 2 != 0)
            {
                cout << "Odd Numbers " << iCnt << endl;
            }

            iCnt++;
        }
    }
};

int main()
{
    Logic obj;
    obj.PrintOddNumbers(20);

    return 0;
}
