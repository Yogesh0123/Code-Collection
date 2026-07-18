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

int main()
{
  //Base bobj();

  cout<<"Inside main\n";

//   Derived dobj();
Derived dobj;

    cout<<dobj.i<<"\n";//0
    cout<<dobj.j<<"\n";//0
    cout<<dobj.x<<"\n";//0

    dobj.fun();
    dobj.gun();

    cout<<"End of main \n";

    return 0;
}

//Singlelavel.cpp