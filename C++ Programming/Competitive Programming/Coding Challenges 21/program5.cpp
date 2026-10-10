
/*
5. Write a program to check whether a number is positive, negative, or zero.
Input: -8
Output: Number is Negative : -8
*/

#include <iostream>
using namespace std;

class Logic
{
public:
    void CheckSign(int iNo)
    {
        switch ((iNo > 0) - (iNo < 0))
        {
            case 1:
                cout << "Number is Positive : " << iNo << endl;
                break;

            case -1:
                cout << "Number is Negative : " << iNo << endl;
                break;

            default:
                cout << "Number is Zero : " << iNo << endl;
        }
    }
};

int main()
{
    Logic obj;
    obj.CheckSign(-8);

    return 0;
}
