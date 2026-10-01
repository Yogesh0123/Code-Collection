/*
2. Accept N numbers from user and return difference between frequency of even number and odd numbers.
Input : N : 7
Elements :85 66 3 80 93 88 90
Output : 1 (4 -3)
*/

#include <iostream>
using namespace std;

int Frequency(int Arr[], int iLength)
{
    int iECount = 0;
    int iOCount = 0;

    for (int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iECount++;
        }
        else
        {
            iOCount++;
        }
    }

    return iECount - iOCount;
}

int main()
{
    int iSize = 0;
    int iRet = 0;

    cout << "Enter number of elements: ";
    cin >> iSize;

    int *p = new int[iSize];

    cout << "Enter " << iSize << " elements" << endl;

    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "Enter element " << iCnt + 1 << " : ";
        cin >> p[iCnt];
    }

    iRet = Frequency(p, iSize);

    cout << "Result is: " << iRet;

    delete[] p;

    return 0;
}