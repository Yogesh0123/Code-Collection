#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;
public:
    ArrayX(int x)
    {
        iSize=x; 
        Arr=new int[iSize];
    }

    ~ArrayX()
    {
        delete []Arr;
    }       
};

int main()
{

    ArrayX *aobj1 = new ArrayX(5);

    //Logic(Function call)

    cout<<aobj1->iSize<<"\n"; //Error

   aobj1->iSize=0; //ISSUE //Error

   aobj1->Arr= NULL;  //ISSUE //Error

    delete aobj1;
 
    return 0;
}
