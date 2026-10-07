/*
1. Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not.

Input : 6
NO: 66
Elements :85 66 3 66 93 88
Output : Number is present (TRUE)

Input : 6
NO: 12
Elements :85 11 3 15 11 111
Output : Number is not present (FALSE)
*/

#include <iostream>
using namespace std;

bool Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    while (iCnt < iLength)
    {
        if (Arr[iCnt] == iNo)
        {
            return true;
        }

        iCnt++;
    }

    return false;
}

int main()
{
    int iSize = 0;
    int iValue = 0;

    cout << "Enter number of elements: ";
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

    bool bRet = Check(p, iSize, iValue);

    if (bRet)
    {
        cout << "Number is present";
    }
    else
    {
        cout << "Number is not present";
    }

    delete[] p;

    return 0;
}