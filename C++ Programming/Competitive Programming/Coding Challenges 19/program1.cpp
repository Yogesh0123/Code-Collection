/*
1. Accept N numbers from user and return the largest number.
Input :6
Elements :85 66 3 66 93 88
Output :93
*/
#include<iostream>
using namespace std;

int Maximum(int Arr[], int iLength)
{
    int iMax = Arr[0];

    for(int iCnt = 1; iCnt < iLength; iCnt++)
    {
        iMax = (Arr[iCnt] > iMax) ? Arr[iCnt] : iMax;
    }

    return iMax;
}

int main()
{
    int iSize = 0;

    cout << "Enter number of elements: ";
    cin >> iSize;

    int *p = new int[iSize];

    cout << "Enter " << iSize << " elements" << endl;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "Enter element " << iCnt + 1 << " : ";
        cin >> p[iCnt];
    }

    cout << "Largest Number is : " << Maximum(p, iSize);

    delete []p;

    return 0;
}