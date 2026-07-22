//Multilevel.cpp
#include<iostream>
using namespace std;

class Base
{
   public:
   int i,j;

   Base()
   {
    cout<<"Inside based default constructor\n";
    i=0;
    j=0;
   }

   ~Base()
   {
    cout<<"Inside based distructor\n";
   }

   void fun ()
   {
    cout<<"Inside base fun\n";
   }
};

class Derived:public Base
{
 public: 
 int x;

 Derived()
 {
    cout<<"Inside derived constructor\n";
    x = 0;
}

    ~ Derived()
    {
        cout<<"Inside derived distructor\n";
    }
    void gun()
    {
        cout<<"Inside gun of derived\n";
    }
 
};

class DerivedX: public Derived
{
    public: 
    int y;
    
    DerivedX()
    {
        cout<<"Inside derived X constructor\n";
        y = 0;
    }
    ~DerivedX()
    {
        cout<<"Inside derived X distructor\n";
    }
    void sun()
    {
        cout<<"Inside sun of derivedX\n";
    }
};

int main()
{
  //Base bobj();

  cout<<"Inside main\n";

//   Derived dobj();
DerivedX dobj;

cout<<"Size of derived class object is :"<<sizeof(Base)<<"\n";//8
cout<<"Size of derived class object is :"<<sizeof(Derived)<<"\n"; //12
cout<<"Size of derivedX class object is :"<<sizeof(DerivedX)<<"\n"; //16


    cout<<dobj.i<<"\n";//0
    cout<<dobj.j<<"\n";//0
    cout<<dobj.x<<"\n";//0
    cout<<dobj.y<<"\n";//0

    dobj.fun();
    dobj.gun();
    dobj.sun();

    cout<<"End of main \n";

    return 0;
}
