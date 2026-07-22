#include<iostream>
using namespace std;

class Demo
{
    int x;
    int y; // const int y 

public:
    Demo(int a, int b)//  : x(a), y(b)
    {
        x=a;
        y=b;
    }

    void show()
    {
        cout<<x<<" "<<y;
    }
};

int main()
{
    Demo obj(10, 20);
    obj.show();
    return 0;
}

//Assignment23.cpp