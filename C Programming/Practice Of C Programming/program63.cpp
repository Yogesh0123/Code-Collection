#include<iostream>
using namespace std;

class demo
{
public:
int i,j;//charectaritics

demo(int a,int b)
{
    i=a;
    j=b;
}

void display()
{
cout<<i<<"\n";
cout<<j<<"\n";
}
};

int main()
{
demo dobj1(10,20);  
demo dobj2(50,60);

dobj1.display();
dobj2.display();


    return 0;
}
//ThisDemo.cpp