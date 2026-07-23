#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()//1000 address
        { cout<<"Inside base fun\n";}

        virtual void gun() //2000 address
        { cout<<"Inside base gun\n";}

        virtual void sun() //3000 address
        { cout<<"Inside base sun\n";}

};//8 byte

class Derived : public Base
{
    int x,y;

    void fun() //4000 address
        { cout<<"Inside derived fun\n";}//Redefination 

    void sun() //5000 address
        { cout<<"Inside Derived sun\n";}//Redefination 

    virtual void run() //6000 address
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
//OverridingVirtualX.cpp