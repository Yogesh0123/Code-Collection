/*
5. Accept N numbers from user and display all such elements which are multiples of 11.
Input  : 6
Elements :85 66 3 55 93 88
Output : 66 55 88
*/

#include <iostream>
using namespace std;

void Display(int Arr[], int iLength)
{
    for (int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 11 == 0)
        {
            cout << Arr[iCnt] << "\t";
        }
    }
}

int main()
{
    int iSize = 0;

    cout << "Enter number of elements : ";
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