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
    Base *bp=NULL;
    Derived dobj;

    bp = new Derived;//upcasting

    bp->fun(); //Base fun 
    bp->gun(); //Base gun 
    bp->sun(); // base sun
   // bp->run(); //error

    return 0;
}
//Redefination.cpp