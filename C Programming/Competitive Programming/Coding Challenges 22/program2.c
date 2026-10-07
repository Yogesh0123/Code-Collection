/*
Q2. Write a program to check whether a number is a palindrome or not.
Input: 121
Output: This is a Palindrome Number: 121
*/

#include<stdio.h>

void CheckPalindrome(int iNum)
{
    int iOriginal = iNum;
    int iReverse = 0;
    int iDigit = 0;

    for(; iNum != 0; iNum = iNum / 10)
    {
        iDigit = iNum % 10;
        iReverse = (iReverse * 10) + iDigit;
    }

    if(iOriginal == iReverse)
    {
        printf("This is a Palindrome Number: %d",iOriginal);
    }
    else
    {
        printf("This is Not Palindrome Number: %d",iOriginal);
    }
}

int main()
{
    int iValue = 121;

    CheckPalindrome(iValue);

    return 0;
}