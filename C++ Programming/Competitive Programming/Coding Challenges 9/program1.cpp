//Q1.Write a program which accept number from user and print that number of $ & * on screen.
//Input : 5
//Output : $ * $ * $ * $ * $ *

//Input : 3
//Output : $ * $ * $ *

//Input : -3
//Output : $ * $ * $ *

#include <iostream>
using namespace std;

void Pattern(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        cout << "$ *\t";
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter Number ";
    cin >> iValue;

    Pattern(iValue);

    return 0;
}