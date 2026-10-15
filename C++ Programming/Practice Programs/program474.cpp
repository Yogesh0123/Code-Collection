//Specific
#include<iostream>
using namespace std;

int Maxmimum(int no1,int no2)
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
    cout << Maxmimum(21,11) << "\n";
    return 0;
}