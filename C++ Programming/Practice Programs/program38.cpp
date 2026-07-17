#include<iostream>
using namespace std;

class hello
{
 public:
 int additiontwo(int a, int b)
 {
    return a+b;
 }
 int additionthree(int a, int b, int c)
 {
    return a+b+c;
 }
 int additionfour(int a, int b, int c,int d)
 {
    return a+b+c+d;
 }

}; 

int main()
{
 hello hobj;

 cout<<hobj.additiontwo(10,20)<<"\n";
  cout<<hobj.additionthree(10,20,30)<<"\n";
   cout<<hobj.additionfour(10,20,30,40)<<"\n";

    return 0;
}
//FunctionOverloading.cpp