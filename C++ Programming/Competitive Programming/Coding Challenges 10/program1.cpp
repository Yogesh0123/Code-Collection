#include <iostream>
using namespace std;

void Number(int iNo)
{
    if (iNo >= 100)
    {
        cout << "\nLarge Number: " << iNo << "\n";
    }
    else if (iNo > 50)
    {
        cout << "\nMedium Number : " << iNo << "\n";
    }
    else if (iNo >= 0)
    {
        cout << "\nSmall Number: " << iNo << "\n";
    }
    else
    {
        cout << "\nInvalid Number: " << iNo << "\n";
    }
}

int main()
{
    int iValue = 0;

    cout << "\nEnter number : ";
    cin >> iValue;

    Number(iValue);

    return 0;
}