/*
1. Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.
Input : N : 6

Elements : 85 66 3 80 93 88

Output : 53 (234 - 181)
*/

#include <iostream>
using namespace std;

int Difference(int Arr[], int iLength)
{
    int iEvenSum = 0;
    int iOddSum = 0;

    for (int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iEvenSum += Arr[iCnt];
        }
        else
        {
            iOddSum += Arr[iCnt];
        }
    }

    return iEvenSum - iOddSum;
}

int main()
{
    int iSize = 0;
    int iRet = 0;

    cout << "Enter number of elements : ";
    cin >> iSize;

    int *p = new int[iSize];

    cout << "Enter " << iSize << " elements" << endl;

    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "Enter element " << iCnt + 1 << " : ";
        cin >> p[iCnt];
    }

    iRet = Difference(p, iSize);

    cout << "Difference is : " << iRet << endl;

    delete[] p;

    return 0;
}