
#include<stdio.h>

int main()
{
        int iNo = 0;
        int iCount =0;
        int iDigit =0;

        printf("Enter number: \n");
        scanf("%d",&iNo);

        while (iNo != 0)
        {
            iDigit = iNo % 2;
            //iCount = iCount +(iDigit & 1);// he pan logic

            iCount= iCount+iDigit;

            // if (iDigit==1)
            // {
            //     iCount++;
            // }
            iNo=iNo/2;
        }
        printf("Number is %d",iCount);
        
        
    return 0;
}