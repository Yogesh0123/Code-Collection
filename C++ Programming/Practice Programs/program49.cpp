#include<iostream>
using namespace std;

class Arithmatic 
{
    public:
        float No1;
        float No2;

        Arithmatic(float A, float B)
        {
            this->No1=A;
            this->No2=B;
        }

        float Addition()
        {
            float Ans;
            Ans = No1+No2;
            return Ans;
        }

        float Subtraction()
        {
            float Ans;
            Ans = No1-No2;
            return Ans;
        }
};

int main()
{
    Arithmatic aobj(11.5f,10.3f);

    cout<<aobj.Addition()<<"\n"; // answer is 21.8
    cout<<aobj.Subtraction()<<"\n"; // answer is  1.2

    return 0;
}
//SpecificClassX.cpp