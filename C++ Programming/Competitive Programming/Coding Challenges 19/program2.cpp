/*
2. Accept N numbers from user and return the smallest number.
Input : 6
Elements :85 66 3 66 93 88
Output : 3
*/
#include <iostream>
using namespace std;

int Minimum(int Arr[], int iLength)
{
    int iSmallest = Arr[iLength - 1];

    for(int iCnt = iLength - 2; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] < iSmallest)
        {
            iSmallest = Arr[iCnt];
        }
    }

    return iSmallest;
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

    int iRet = Minimum(p, iSize);

    cout << "Smallest number is : " << iRet;

    delete []p;

    return 0;
}