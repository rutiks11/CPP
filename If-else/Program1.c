// Write a program to accept an integer and check if it is even or odd

#include <stdio.h>
#include <stdbool.h>

bool ChkEvenOdd(int num)
{
    bool flag = false;

    if(num % 2 == 0)
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
    int iValue  = 0;
    bool bRet = false;

    printf("Enter the Number ");
    scanf("%d",&iValue);
    
    bRet = ChkEvenOdd(iValue);

    if(bRet == false)
    {
        printf("Given Number is Odd\n");
    }
    else
    {
        printf("Given Number is Even\n");
    }

    return 0;
}