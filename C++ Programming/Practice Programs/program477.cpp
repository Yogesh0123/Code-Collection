#include<iostream>
using namespace std;

float Maximum(float no1, float no2)
{
    float Ans;

(no1 > no2) ? Ans = no1 : Ans = no2;

    return Ans;
}

int main()
{
    cout << Maximum(21.5f, 11.5f) << "\n";

    return 0;
}