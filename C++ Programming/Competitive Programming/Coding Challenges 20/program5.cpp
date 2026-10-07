/*
5. Write a program to print the multiplication table of a number.
Input: 5
Output: 5 x 1 = 5
        5 x 2 = 10
        5 x 3 = 15
        5 x 4 = 20
        5 x 5 = 25
        5 x 6 = 30
        5 x 7 = 35
        5 x 8 = 40
        5 x 9 = 45
        5 x 10 = 50
*/

#include<iostream>
using namespace std;

class Logic
{
    public:

        void PrintTable(int iNum)
        {
            int iCnt = 1;

            do
            {
                cout << iNum << " x " << iCnt << " = "
                     << (iNum * iCnt) << endl;

                iCnt++;
            }
            while(iCnt <= 10);
        }
};

int main()
{
    Logic obj;

    obj.PrintTable(5);

    return 0;
}