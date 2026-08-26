//5.Accept number from user and check whether number is even or odd.
//Output:  Enter Number : 11
//         Number is odd
//              &
//         Enter Number : 2
//         Number is Even

#include <iostream>
using namespace std;

bool ChkEven(int iNo)
{
    //Logic
    if ((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "Enter Number : ";
    cin >> iValue;

    bRet = ChkEven(iValue);

    //Display result
    if (bRet == true)
    {
        cout << "Number is Even";
    }
    else
    {
        cout << "Number is odd";
    }

    return 0;
}