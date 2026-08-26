//2.Accept one number from user and print that number of * on screen.
//Output: Enter Number: 5
//        *       *       *       *       *

#include <iostream>
using namespace std;

void Display(int iNo)
{
    //write Updater
    while (iNo > 0)
    {
        cout << "*\t";
        iNo--;
    }
    
}

int main()
{
    int iValue = 0;

    cout << "Enter Number: ";
    cin >> iValue;

    Display(iValue);

    return 0;
}