/*
Q3. Write a program to find the maximum of two numbers.
Input: 20,15
Output: Maximum Number is: 20
*/

#include<iostream>
using namespace std;

class Logic
{
    public:

        void FindMax(int iNum1, int iNum2)
        {
            if(iNum1 >= iNum2)
            {
                cout << "Maximum Number is: " << iNum1;
            }
            else
            {
                cout << "Maximum Number is: " << iNum2;
            }
        }
};

int main()
{
    Logic obj;

    obj.FindMax(20,15);

    return 0;
}