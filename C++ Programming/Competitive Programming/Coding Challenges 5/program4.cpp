// 4. Accept one number and check whether it is divisible by 5 or not.

#include <iostream>
using namespace std;

bool Check(int iNo)
{
    if ((iNo % 5) == 0)
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

    cout << "Enter Number: ";
    cin >> iValue;

    bRet = Check(iValue);

    if (bRet == true)
    {
        cout << "Divisible by 5";
    }
    else
    {
        cout << "Not Divisible by 5";
    }

    return 0;
}