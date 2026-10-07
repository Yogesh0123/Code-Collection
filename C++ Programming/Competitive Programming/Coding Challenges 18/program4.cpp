/*
4. Accept N numbers from user and accept Range, Display all elements from that range

Input : 6
Start : 60
End   : 90
Elements : 85 66 3 76 93 88
Output : 85 66 76 88

Input : 6
Start : 30
End   : 50
Elements : 85 66 3 76 93 88
Output : 0
*/

#include <iostream>
using namespace std;

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCount = 0;

    cout << "Result is : ";

    for (int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
            cout << Arr[iCnt] << "\t";
            iCount++;
        }
    }

    if (iCount == 0)
    {
        cout << "0";
    }
}

int main()
{
    int iSize = 0;
    int iValue1 = 0;
    int iValue2 = 0;

    cout << "Enter number of elements: ";
    cin >> iSize;

    cout << "Enter the starting point: ";
    cin >> iValue1;

    cout << "Enter the ending point: ";
    cin >> iValue2;

    int *p = new int[iSize];

    cout << "Enter " << iSize << " elements" << endl;

    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "Enter element " << iCnt + 1 << " : ";
        cin >> p[iCnt];
    }

    Range(p, iSize, iValue1, iValue2);

    delete[] p;

    return 0;
}