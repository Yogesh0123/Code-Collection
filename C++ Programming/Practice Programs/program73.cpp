#include<iostream>
using namespace std;

template<class T>

class Arithmatic 
{
    public:
        T No1;
        T No2;

        Arithmatic(T A, T B)
        {
            this->No1=A;
            this->No2=B;
        }

        T Addition()
        {
            T Ans;
            Ans = No1+No2;
            return Ans;
        }

        T Subtraction()
        {
            T Ans;
            Ans = No1-No2;
            return Ans;
        }
};

int main()
{
    Arithmatic <int> aobj1(11,10); 

    cout<<aobj1.Addition()<<"\n"; // answer 21
    cout<<aobj1.Subtraction()<<"\n"; // answer is 1

    Arithmatic <double> aobj2(11.2345,10.1234); 

    cout<<aobj2.Addition()<<"\n"; // answer is 21.3579
    cout<<aobj2.Subtraction()<<"\n"; // answer is 1.1111


    return 0;
}
//GenericClassX.cpp