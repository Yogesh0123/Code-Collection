/*
Q1.Write a program to check whether a number is prime or not.
Input : 11
Output : Prime Number : 11
*/

#include<iostream>
using namespace std;

class Logic
{
    public:

    void CheckPrime(int iNum)
    {
        int iCount = 0;

        if(iNum <= 1)
        {
            cout << "Not Prime Number: " << iNum;
            return;
        }

        for(int i = 1; i <= iNum; i++)
        {
            if(iNum % i == 0)
            {
                iCount++;
            }
        }

        if(iCount == 2)
        {
            cout << "Prime Number : " << iNum;
        }
        else
        {
            cout << "Not Prime Number: " << iNum;
        }
    }
};

int main()
{
    Logic obj;

    obj.CheckPrime(11);

    return 0;
}