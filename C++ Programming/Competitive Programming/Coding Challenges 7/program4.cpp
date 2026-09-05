//Q4.Accept one character from user and convert case of that character.
//Input : a Output : A
//Input : D Output : d

#include <iostream>
using namespace std;

void DisplayConvert(char CValue)
{
    if ((CValue >= 'a') && (CValue <= 'z'))
    {
        cout << (char)(CValue - 32);
    }
    else if ((CValue >= 'A') && (CValue <= 'Z'))
    {
        cout << (char)(CValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    cout << "Enter Character \n";
    cin >> cValue;

    DisplayConvert(cValue);

    return 0;
}