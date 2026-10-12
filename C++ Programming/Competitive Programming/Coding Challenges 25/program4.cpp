/*
Q4. Accept number from user and display below pattern.

Input : 4
Output : # 1 * # 2 * # 3 * # 4 *
*/

#include <iostream>
using namespace std;

void Pattern(int iNo)
{
    int i = 1;

    while(i <= iNo)
    {
        cout << "#\t" << i << "\t*\t";
        i++;
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