#include<iostream>
using namespace std;

class demo
{
public:
int i,j;//charectaritics

//demo (demo*this ,int a,int b)
demo(int a,int b)
{
    this->i=a;
    this->j=b;
}

//void display(demo*this)
void display()
{
cout<<this->i<<"\n"; //this->i
cout<<this->j<<"\n"; //this->j 
}
};

int main()
{
demo dobj1(10,20);  //&dobj1 =100;
demo dobj2(50,60);  //&dobj2 =200;

dobj1.display();//Display(&dobj1); -> display(100);
dobj2.display();//Display(&dobj2); -> diaplay(200);


    return 0;
}
//ThisDemoX.cpp