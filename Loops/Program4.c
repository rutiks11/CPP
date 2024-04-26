#include <stdio.h>
int fact(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    return num * fact(num - 1);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number to find factorial :: ");
    scanf("%d", &iValue);

    iRet = fact(iValue);

    printf("Factorial of Number is %d", iRet);
    return 0;
}