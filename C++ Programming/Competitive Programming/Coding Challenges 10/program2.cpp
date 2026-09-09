// 2. Accept single digit number from user and print it into word.
// Input : 9
// Output : Nine
// Input : -3
// Output : Three
// Input : 12
// Output : Invalid Number

#include <iostream>
using namespace std;

void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    cout << "Output is : ";

    switch (iNo)
    {
        case 0:
            cout << "Zero";
            break;

        case 1:
            cout << "One";
            break;

        case 2:
            cout << "Two";
            break;

        case 3:
            cout << "Three";
            break;

        case 4:
            cout << "Four";
            break;

        case 5:
            cout << "Five";
            break;

        case 6:
            cout << "Six";
            break;

        case 7:
            cout << "Seven";
            break;

        case 8:
            cout << "Eight";
            break;

        case 9:
            cout << "Nine";
            break;

        default:
            cout << "Invalid Number";
            break;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number: ";
    cin >> iValue;

    Display(iValue);

    return 0;
}