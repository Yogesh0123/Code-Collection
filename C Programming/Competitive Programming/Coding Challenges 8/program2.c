// 2. Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height)
// Input : 5.3 9.78
// Output : 51.834

#include<stdio.h>

double ReactArea(float RectangleArea1,float RectangleArea2)
{
   double dArea = 0.0;

   dArea = RectangleArea1 * RectangleArea2;

   return dArea;
}
int main()
{
    float fValue1 = 0.0f,fValue2=0.0f;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f",&fValue1);

    printf("Enter height: ");
    scanf("%f",&fValue2);

    dRet = ReactArea(fValue1,fValue2);

    printf("Area is :%.3f",dRet);

    return 0;
}