
#include<stdio.h>

int main()
{
    
    float fvalue1 =0.0f; //To store first input
    float fvalue2 =0.0f; //To store second input
    float fresult =0.0f; //To store the result

    printf("Enter First Number \n");
    scanf("%f",&fvalue1);

    printf("Enter Second Number \n");
    scanf("%f",&fvalue2);

    fresult=fvalue1+fvalue2; //Perfomr the addition

    printf("The Final Addition is %f \n",fresult);

    return 0;
}
//program6.c