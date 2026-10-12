/*
Q5. Accept number from user and display below pattern.

Input : 8
Output : 2 4 6 8 10 12 14 16
*/

#include <iostream>
using namespace std;

void Pattern(int iNo)
{
    int i = 2;

    while(i <= iNo * 2)
    {
        cout << i << "\t";
        i += 2;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number of elements: ";
    cin >> iValue;

    Pattern(iValue);

    return 0;
}