// Program to find Power

#include <stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iAns = 1;

    printf("Enter the Two Values :: ");
    scanf("%d%d",&iValue1,&iValue2);

    for(int i=0; i<iValue2; i++)
    {
        iAns = iAns * iValue1;
    }   

    printf("%d raised to %d is %d", iValue1,iValue2,iAns);

    return 0;
}