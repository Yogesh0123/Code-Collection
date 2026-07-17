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

    cout<<sizeof(dobj)<<"\n";//8 byte
    
    return 0;
}
//Class_DemoX.cpp