#include<iostream>
using namespace std;

//OOP start
class ArrayX
{
    public:
int Summation(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

};

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;

    ArrayX aobj;

    cout<<"Enter the number of elements : ";
    cin>>iLength;

    Brr = new int[iLength];   // allocating the memory

    cout<<"Enter the elements : ";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Brr[iCnt];
    }

    cout<<"Elements of the array are : "<<endl;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Brr[iCnt]<<endl;
    }

    int iRet = aobj.Summation(Brr, iLength);
    cout<<"Summation is : "<<iRet<<endl;

    delete[] Brr;
    

    return 0;
}