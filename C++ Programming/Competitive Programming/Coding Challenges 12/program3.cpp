/*3. Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)
Input: 5
Output: 5000

Input: 12
Output: 12000
*/

#include <iostream>
using namespace std;

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    for (int i = 1; i <= iNo; i++)
    {
        iMeter = iMeter + 1000;
    }

    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter distance: ";
    cin >> iValue;

    iRet = KMtoMeter(iValue);

    cout << "Distance is meter is : " << iRet;

    return 0;
}