// 5. Write a program to accept a decimal number and convert it to binary.

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRem = 0;

    printf("Enter Number :: ");
    scanf("%d",&iValue);


    while (iValue!=0)
    {
        iRem = iValue % 2;
        printf("%d\t",iRem);
        iValue = iValue /2;    
    }
    

    return 0;
}