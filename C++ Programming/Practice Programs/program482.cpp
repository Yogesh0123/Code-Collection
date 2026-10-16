#include<iostream>
using namespace std;
void Display(double Arr[], int Size)
{
    cout<<"Elements of array are : \n";

    for(int i = 0; i < Size; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

int main()
{
   double Brr[] = {10.2,20.2,30.2,40.2,50.2};

   Display(Brr,5);

    return 0;
}