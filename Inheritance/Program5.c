// Accept two numbers and swap two numbers

#include <stdio.h>

void SwapbyThirdVariable(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Numbers :: %d  %d\t",num1, num2);
}

void SwapbyArithematic(int num1, int num2)
{
   num1 = num1 + num2;
   num2 = num1 - num2;
   num1 = num1 - num2;

   printf("Numbers :: %d  %d",num1,num2);  
}

int main()
{
    int iValue1 = 0, iValue2 =0;

    printf("Enter Two Number :: ");
    scanf("%d%d",&iValue1,&iValue2);

    SwapbyThirdVariable(iValue1, iValue2);
    SwapbyArithematic(iValue1,iValue2);
  
    return 0;
}