/*
5. Accept N numbers from user and return product of all odd elements.

Input : 6
Elements : 15 66 3 70 10 88
Output : 45

Input : 6
Elements : 44 66 72 70 10 88
Output : 0
*/

#include <iostream>
using namespace std;

int Product(int Arr[], int iLength)
{
    int iMult = 1;
    int iCount = 0;

    for (int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 != 0)
        {
            iMult *= Arr[iCnt];
            iCount++;
        }
    }

    return (iCount > 0) ? iMult : 0;
}

int main()
{
    int iSize = 0;

    cout << "Enter number of elements: ";
    cin >> iSize;

    int *p = new int[iSize];

    cout << "Enter " << iSize << " elements" << endl;

    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "Enter element " << iCnt + 1 << " : ";
        cin >> p[iCnt];
    }

    int iRet = Product(p, iSize);

    cout << "Product is : " << iRet;

    delete[] p;

    return 0;
}