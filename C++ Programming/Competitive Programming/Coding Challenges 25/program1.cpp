/*
Q1. Accept number from user and display below pattern.

Input : 5
Output : A B C D E
*/

#include <iostream>
using namespace std;

void Pattern(int iNo)
{
    int i = 1;
    char ch = 'A';

    cout << "Output is : " << endl;

    while(i <= iNo)
    {
        cout << ch << "\t";
        ch++;
        i++;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number of elements : ";
    cin >> iValue;

    Pattern(iValue);

    return 0;
}