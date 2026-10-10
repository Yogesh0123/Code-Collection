
/*
Q2. Write a program to display the grade of a student based on marks.
Input : 89
Output : Congratulations Your Pass Grade 'B': 89%.
*/

#include <iostream>
using namespace std;

class Logic
{
public:
    void DisplayGrade(int marks)
    {
        char grade;

        if (marks >= 90)
            grade = 'A';
        else if (marks >= 75)
            grade = 'B';
        else if (marks >= 60)
            grade = 'C';
        else if (marks >= 35)
            grade = 'D';
        else
        {
            cout << "I Am Sorry Your Failed:  " << marks << "%." << endl;
            return;
        }

        cout << "Congratulations Your Pass Grade '"
             << grade << "': ";

        if (grade == 'A')
            cout << " ";
        else if (grade == 'C' || grade == 'D')
            cout << " ";

        cout << marks << "%." << endl;
    }
};

int main()
{
    Logic obj;
    obj.DisplayGrade(89);

    return 0;
}
