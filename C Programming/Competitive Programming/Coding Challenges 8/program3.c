/*3. Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)
Input: 5
Output: 5000

Input: 12
Output: 12000
*/
#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMult =0;
    iMult=iNo*1000;
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance is meter is : %d",iRet);

    return 0;

}