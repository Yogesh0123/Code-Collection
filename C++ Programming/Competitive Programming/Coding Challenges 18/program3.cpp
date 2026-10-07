/*
3. Accept N numbers from user and accept one another number as NO ,
return index of last occurrence of that NO.

Input : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 3

Input : 6
NO: 93
Elements :85 66 3 66 93 88
Output : 4

Input : 6
NO: 12
Elements :85 11 3 15 11 111
Output : -1
*/

#include <iostream>
using namespace std;

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iPos = -1;

    for (int iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        if (Arr[iCnt] == iNo)
        {
            iPos = iCnt;
            break;
        }
    }

    return iPos;
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

    int iRet = LastOcc(p, iSize, iValue);

    if (iRet == -1)
    {
        cout << "There is no such number";
    }
    else
    {
        cout << "Last occurrence of number is " << iRet;
    }

    delete[] p;

    return 0;
}