
/*
Q2. Write a program to display the grade of a student based on marks.
Input : 89
Output : Congratulations Your Pass Grade 'B': 89%.
*/

#include <stdio.h>

void DisplayGrade(int marks)
{
    if (marks >= 90)
    {
        printf("Congratulations Your Pass Grade 'A':  %d%%.\n", marks);
    }
    else if (marks >= 75)
    {
        printf("Congratulations Your Pass Grade 'B': %d%%.\n", marks);
    }
    else if (marks >= 60)
    {
        printf("Congratulations Your Pass Grade 'C':  %d%%.\n", marks);
    }
    else if (marks >= 35)
    {
        printf("Congratulations Your Pass Grade 'D':  %d%%.\n", marks);
    }
    else
    {
        printf("I Am Sorry Your Failed:  %d%%.\n", marks);
    }
}

int main()
{
    DisplayGrade(89);

    return 0;
}
