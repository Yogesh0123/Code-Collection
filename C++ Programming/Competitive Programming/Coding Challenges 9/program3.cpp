//3. Write a program which accept number from user and print its numbers line.
//Input : 4
//Output : -4 -3 -2 -1 0 1 2 3 4

#include <iostream>
using namespace std;

void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int i = -iNo;

    cout << "Output is : ";

    while (i <= iNo)
    {
        cout << i << "\t";
        i++;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number : ";
    cin >> iValue;

    Display(iValue);

    return 0;
}