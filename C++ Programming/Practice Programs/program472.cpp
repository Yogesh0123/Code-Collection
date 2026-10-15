//Specific
#include<iostream>
using namespace std;

double AdditionD(double no1, double no2)
{
    double Ans;
    Ans = no1 + no2;
    return Ans;
}

float AdditionF(float no1, float no2)
{
    float Ans;
    Ans = no1 + no2;
    return Ans;
}

int AdditionI(int no1, int no2)
{
    int Ans;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    cout << AdditionD(11.5,10.2) << "\n";
    cout << AdditionF(11.5f,10.2f) << "\n";
    cout << AdditionI(11,10) << "\n";

    return 0;
}