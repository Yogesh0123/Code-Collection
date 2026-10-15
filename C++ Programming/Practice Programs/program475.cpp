
//Specific
#include<iostream>
using namespace std;

float Maxmimum(float no1,float no2)
{
 if (no1 > no2)
 {
    return no1;
 }
 else
 {
    return no2;
 }
}

int main()
{
    cout << Maxmimum(21.5f,11.5f) << "\n";
    return 0;
}