#include<iostream>
using namespace std;

class Demo{
    public:
    int i;//characteristics
    float f;//characteristics

    Demo()//constructer
    {
        cout<<"Inside constructor";
        i=0;
        f=0.0f;
    }
    ~Demo()//distructor
    {
        cout<<"Inside distructor\n";
    }

    void fun()//behavior
    {
        cout<<"INside fun\n";        

    }
};

int main(){
    Demo dobj;//object creation 

    cout<<"\n"<<dobj.i<<"\n";
    cout<<"Inside Main\n";
    dobj.fun();
    
    cout<<"End of main \n";
    return 0;
}

//Special.cpp