/*
Q3. Accept number from user and display below pattern.

Input : 5
Output : 1 * 2 * 3 * 4 * 5
*/

#include <iostream>
using namespace std;

void Pattern(int iNo)
{
    int i = 1;

    while(i <= iNo)
    {
        cout << i;

        if(i != iNo)
        {
            cout << "\t*\t";
        }

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