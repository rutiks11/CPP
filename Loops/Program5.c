#include<stdio.h>

void factors(int iNo)
{
    for(int i=2;i<iNo;i++)
    {
        if(iNo%i == 0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue =0;

    printf("Enter Number :: ");
    scanf("%d",&iValue);

    factors(iValue);

    return 0;
}