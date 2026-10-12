/*
Q2. Accept number from user and display below pattern.

Input : 5
Output : 5 # 4 # 3 # 2 # 1 #
*/

#include <iostream>
using namespace std;

void Pattern(int iNo)
{
    int i = iNo;

    while(i >= 1)
    {
        cout << i << "\t#\t";
        i--;
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