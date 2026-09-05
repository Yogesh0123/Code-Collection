//Q5.Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.
// Input : E Output : TRUE
// Input : d Output : FALSE

#include <iostream>
using namespace std;

bool ChkVowel(char ch)
{
    if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') ||
        (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
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
    char cValue = '\0';
    bool bRet = false;

    cout << "Enter charecter\n";
    cin >> cValue;

    bRet = ChkVowel(cValue);

    if (bRet == true)
    {
        cout << "It is Vowel";
    }
    else
    {
        cout << "It is not Vowel";
    }

    return 0;
}