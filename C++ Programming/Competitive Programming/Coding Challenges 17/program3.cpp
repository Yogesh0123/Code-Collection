/*
3. Accept N numbers from user check whether that numbers contains 11 in it or not.
Input :  6
Elements :85 66 11 80 93 88
Output : 11 is present
*/

#include <iostream>
using namespace std;

bool Check(int Arr[], int iLength)
{
    for (int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int iSize = 0;

    cout << "Enter number of elements : ";
    cin >> iSize;

    int *p = new int[iSize];

    cout << "Enter " << iSize << " elements" << endl;

    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "Enter element " << iCnt + 1 << " : ";
        cin >> p[iCnt];
    }

    bool bRet = Check(p, iSize);

    if (bRet)
    {
        cout << "11 is present";
    }
    else
    {
        cout << "11 is absent";
    }

    delete[] p;

    return 0;
}