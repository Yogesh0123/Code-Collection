/*
3. Accept N numbers from user and display all such elements which are
even and divisible by 5.
Input : N : 6

Elements : 85 66 3 80 93 88

Output : 80
*/

#include <iostream>
using namespace std;

void Display(int Arr[], int iLength)
{
    for (int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 10) == 0)
        {
            cout << Arr[iCnt] << "\t";
        }
    }
}

int main()
{
    int iSize = 0;

    cout << "Enter Number of Elements: ";
    cin >> iSize;

    int *p = new int[iSize];

    cout << "Enter " << iSize << " elements" << endl;

    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "Enter element " << iCnt + 1 << " : ";
        cin >> p[iCnt];
    }

    Display(p, iSize);

    delete[] p;

    return 0;
}