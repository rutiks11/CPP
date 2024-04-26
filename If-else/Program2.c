// Write a program to accept a number and check if it is divisible 
// by 5 and 7 .

#include <stdio.h>
#include <stdbool.h>

bool ChkDivisibility(int iValue)
{
    bool flag = false;

    if((iValue % 5 == 0) && (iValue % 7 == 0))
    {
        flag = true;
    }
    else
    {
        flag = false;
    }

    return flag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number to check it is Divisible by 5 and 7 :: ");
    scanf("%d",&iValue);

    bRet = ChkDivisibility(iValue);

    if(bRet == true)
    {
        printf("It is divisible by 5 and 7");
    }
    else
    {
        printf("It is not divisible by 5 and 7");
    }

    return 0;
}