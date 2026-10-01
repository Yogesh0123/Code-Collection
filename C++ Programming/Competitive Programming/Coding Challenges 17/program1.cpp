/*
1. Accept N numbers from user and return frequency of even numbers.
Input    : 6
Elements :85 66 3 80 93 88
Output : 3
*/

#include <iostream>
using namespace std;

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount = 0;

    while (iCnt < iLength)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }

        iCnt++;
    }

    return iCount;
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

    iRet = CountEven(p, iSize);

    cout << "Result is : " << iRet;

    delete[] p;

    return 0;
}