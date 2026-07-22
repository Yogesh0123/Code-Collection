#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
};//8 byte

class Derived : public Base
{
    int x,y;
}; //16 byte

int main()
{
    Base *bp=NULL;
    Derived dobj;

    bp = new Derived;

    return 0;
}
//UpcastingDynamic.cpp