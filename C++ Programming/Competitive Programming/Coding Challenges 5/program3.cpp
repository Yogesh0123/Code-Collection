// 3. Program to print 5 to 1 numbers on screen.

#include <iostream>
using namespace std;

void Display()
{
    int i = 5;

    while (i >= 1)
    {
        cout << i << "\t";
        i--;
    }
}

int main()
{
    Display();

    return 0;
}