#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        { cout<<"Inside base fun\n";}

        virtual void gun()
        { cout<<"Inside base gun\n";}

        virtual void sun()
        { cout<<"Inside base sun\n";}

};//8 byte

class Derived : public Base
{
    int x,y;

    void fun()
        { cout<<"Inside derived fun\n";}//Redefination 

    void sun()
        { cout<<"Inside Derived sun\n";}//Redefination 

    virtual void run()
        { cout<<"Inside Derived run\n";}//Defination 
}; //16 byte

int main()
{
   Base *bp = new Derived();//upcasting

   bp->fun(); //Based fun
   bp->gun(); // based gun 
   bp->sun(); //derived sun 
  // bp->run(); //error

    return 0;
}
//OverridingVirtual.cpp
