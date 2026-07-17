#include<iostream>
using namespace std;

class Demo{
    public:
    int i;//characteristics
    float f;//characteristics

    void fun()//behavior
    {
        cout<<"INside fun\n";        

    }
};

int main(){
    Demo dobj;

    cout<<dobj.i<<"\n";//8 byte
    dobj.fun();
    
    return 0;
}
//CLass_DemoXX.cpp