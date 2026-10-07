/*
2. Accept N numbers from user and accept one another number as NO ,
return index of first occurrence of that NO.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 1

Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : -1
*/

#include <iostream>
using namespace std;

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = iLength - 1;

    while (iCnt >= 0)
    {
        if (Arr[iCnt] == iNo)
        {
            // Continue searching from left side
            int iIndex = iCnt;

            while (iIndex > 0 && Arr[iIndex - 1] == iNo)
            {
                iIndex--;
            }

            return iIndex;
        }

        iCnt--;
    }

    return -1;
}

int main()
{
    int iSize = 0;
    int iValue = 0;

    cout << "Enter number of elements : ";
    cin >> iSize;

    cout << "Enter the number: ";
    cin >> iValue;

    int *p = new int[iSize];

    cout << "Enter " << iSize << " elements" << endl;

    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "Enter element " << iCnt + 1 << ": ";
        cin >> p[iCnt];
    }

    int iRet = FirstOcc(p, iSize, iValue);

    if (iRet == -1)
    {
        cout << "There is no such number";
    }
    else
    {
        cout << "First occurrence of number is " << iRet;
    }

    delete[] p;

    return 0;
}