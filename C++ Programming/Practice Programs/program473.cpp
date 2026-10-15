//Generic
#include<iostream>
using namespace std;

template <class T>//Function Template 

T Addition(T no1, T no2)
{
    T Ans;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    cout << Addition(11.5,10.2) << "\n";
    cout << Addition(11.5f,10.2f) << "\n";
    cout << Addition(11,10) << "\n";
    return 0;
}