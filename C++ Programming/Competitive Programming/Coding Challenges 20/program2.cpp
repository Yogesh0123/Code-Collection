/*
Q2. Write a program to check whether a number is a palindrome or not.
Input: 121
Output: This is a Palindrome Number: 121
*/

#include<iostream>
using namespace std;

class Logic
{
    public:

        bool CheckPalindrome(int iNum)
        {
            int iReverse = 0;
            int iDigit = 0;
            int iTemp = iNum;

            while(iTemp > 0)
            {
                iDigit = iTemp % 10;
                iReverse = iReverse * 10 + iDigit;
                iTemp = iTemp / 10;
            }

            return (iNum == iReverse);
        }
};

int main()
{
    Logic obj;
    int iValue = 121;

    if(obj.CheckPalindrome(iValue))
    {
        cout << "This is a Palindrome Number: " << iValue;
    }
    else
    {
        cout << "This is Not Palindrome Number: " << iValue;
    }

    return 0;
}