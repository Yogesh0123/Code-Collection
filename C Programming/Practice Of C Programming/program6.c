 #include<stdio.h>

 float AddTwoNumbers(float fNo1,float fNo2)//hungreen case //This is c function
 {
    float fAns = 0.0f;

    fAns= fNo1+fNo2;

    return fAns;
 }

int main()
{
    
    float fvalue1 =0.0f; //To store first input
    float fvalue2 =0.0f; //To store second input
    float fresult =0.0f; //To store the result

    printf("Enter First Number \n");
    scanf("%f",&fvalue1);

    printf("Enter Second Number \n");
    scanf("%f",&fvalue2);

    fresult=AddTwoNumbers(fvalue1,fvalue2); //Perfomr the addition

    printf("The Final Addition is %f \n",fresult);

    return 0;
}
//program8.c