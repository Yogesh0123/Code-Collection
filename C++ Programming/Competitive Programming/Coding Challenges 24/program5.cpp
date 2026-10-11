/*
Q5. Write a program to print all numbers from 1 to N
that are divisible by both 2 and 3.

Input : 30
Output:
6
12
18
24
30
*/

#include <iostream>
using namespace std;

void printDivisibleBy2and3(int n)
{
    int iCnt = 1;

    while(iCnt <= n)
    {
        if(iCnt % 2 == 0 && iCnt % 3 == 0)
        {
            cout << iCnt << endl;
        }

        iCnt++;
    }
}

int main()
{
    printDivisibleBy2and3(30);

    return 0;
}