#include<iostream>
using namespace std;

//Encapsulation
class Marvellous 
{
    //Acess specifier
    public:
    int no1,no2;//Charecteristics

    void Fun()//Behavior
    {
        cout<<"Inside fun\n";
    }
    void Gun()//Behavior
    {
        cout<<"Inside gun\n";
    }

};

int main()
//Object creation(Instance)
{
    Marvellous mobj1;
    Marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n";//8

    cout<<mobj1.no1<<"\n";

    mobj1.Fun();
    mobj2.Fun();

    mobj1.Gun();

return 0;
}
//EncapsulationDemo.cpp
