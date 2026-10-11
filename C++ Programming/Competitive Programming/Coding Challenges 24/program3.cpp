
/*
Q3. Write a program to display all factors of a given number.
Input : 12
Output : Factors are :  12
         1
         2
         3
         4
         6
         12
*/

#include <iostream>
using namespace std;

class Logic
{
public:
    void DisplayFactors(int iNum)
    {
        cout << "Factors are :  " << iNum << endl;

        int iCnt = 1;

        while (iCnt * iCnt <= iNum)
        {
            if (iNum % iCnt == 0)
            {
                cout << iCnt << endl;

                if (iCnt != iNum / iCnt)
                {
                    cout << iNum / iCnt << endl;
                }
            }

            iCnt++;
        }
    }
};

int main()
{
    Logic obj;
    obj.DisplayFactors(12);

    return 0;
}
