//3.Accept on number from user if number is less than 10 then print “Hello” otherwise print “Demo”.

// Output: Enter number: 5
//         Hello
//
//         Enter number: 11
//         Demo

#include <iostream>
using namespace std;

void Display(int iNo)
{
    if (iNo < 10)
    {
        cout << "Hello";
    }
    else
    {
        cout << "Demo";
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