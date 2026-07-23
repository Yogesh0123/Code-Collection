#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        { cout<<"Inside base fun\n";}

        void gun()
        { cout<<"Inside base gun\n";}

        void sun()
        { cout<<"Inside base sun\n";}

};//8 byte

class Derived : public Base
{
    int x,y;

    void fun()
        { cout<<"Inside derived fun\n";}//Redefination 

    void sun()
        { cout<<"Inside Derived sun\n";}//Redefination 

    void run()
        { cout<<"Inside Derived run\n";}//Defination 
}; //16 byte

int main()
{
    cout<<sizeof(Base)<<"\n";//8 byte
    cout<<sizeof(Derived)<<"\n"; //16 byte 

    return 0;
}
//OverridingSizeOf.cpp

//error aalay mala hya code madhe 