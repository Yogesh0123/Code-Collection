#include<iostream>
using namespace std;

class Arithmatic
{
    public :
    int no1;
    int no2;

    Arithmatic()
    {
        no1 =0;
        no2 =0;
    }

    Arithmatic(int value1, int value2 )
    {
        no1=value1;
        no2=value2;
    }

int Addition()
{
    int Ans= 0;
    Ans = no1+no2;
    return Ans;
}

int Subtraction()
{
    int Ans= 0;
    Ans = no1-no2;
    return Ans;
}
};

int main()
{
 Arithmatic aobj(11,10);
 int result = 0;

 result = aobj.Addition();
 cout<<"Addition is : "<<result<<"\n";

 result = aobj.Subtraction();
 cout<<"Subtraction is : "<<result<<"\n";


 return 0;
}
// OOP.cpp