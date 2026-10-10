
/*
Q3. Write a program to check whether a number is a perfect number or not.
Input : 6
Output : 6 is a Perfect Number
*/

#include <iostream>
using namespace std;

class Logic
{
public:
    void CheckPerfect(int num)
    {
        int sum = 0;
        int i = 1;

        while (i * i <= num)
        {
            if (num % i == 0)
            {
                sum += i;

                int other = num / i;

                if (other != i && other != num)
                {
                    sum += other;
                }
            }

            i++;
        }

        if (num > 0 && sum == num)
        {
            cout << num << " is a Perfect Number" << endl;
        }
        else
        {
            cout << num << " is not a Perfect Number" << endl;
        }
    }
};

int main()
{
    Logic obj;
    obj.CheckPerfect(6);

    return 0;
}
