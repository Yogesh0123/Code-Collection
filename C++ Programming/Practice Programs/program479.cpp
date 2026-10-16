//Generic
#include<iostream>
using namespace std;

template <class Y>

Y Maximum(Y No1, Y No2)
{
    Y Ans;

    if(No1 > No2)
    {
        Ans = No1;
    }
    else
    {
        Ans = No2;
    }

    return Ans;
}

int main()
{
    cout<<Maximum(21.5f,11.5f)<<"\n";
    cout<<Maximum(21.5,11.5)<<"\n";
    cout<<Maximum(21,11)<<"\n";
    
    return 0;
}