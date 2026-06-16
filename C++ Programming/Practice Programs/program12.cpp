#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

    ArrayX(int x)
    {
        cout<<"Inside Constructor\n";
        iSize=x; //Charecteristics initialization
        Arr=new int[iSize];//resource allocation 
    }

    ~ArrayX()
    {
        cout<<"Inside Distructor\n";
        delete []Arr;//Resource deallocation
    }       
};

int main()
{
    ArrayX aobj1(5);//default 
 
    return 0;
}
