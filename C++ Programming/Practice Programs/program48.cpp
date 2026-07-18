#include<iostream>
using namespace std;

class Arithmatic 
{
    public:
        int No1;
        int No2;

        Arithmatic(int A, int B)
        {
            this->No1=A;
            this->No2=B;
        }

        int Addition()
        {
            int Ans;
            Ans = No1+No2;
            return Ans;
        }

        int Subtraction()
        {
            int Ans;
            Ans = No1-No2;
            return Ans;
        }
};

int main()
{
    Arithmatic aobj(11,10);

    cout<<aobj.Addition()<<"\n"; // answer 21
    cout<<aobj.Subtraction()<<"\n"; // answer is 1

    return 0;
}
//SpecificClass.cpp