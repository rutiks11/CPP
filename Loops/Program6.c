#include<stdio.h>

int main()
{
    int iValue1 =0,iValue2 =0;
    
    printf("Enter the Value :: ");
    scanf("%d%d",&iValue1,&iValue2);

    int small = 0;
    int GCD = 0;

    if(iValue1<=iValue2)
    {
        small = iValue1;
    }
    else
    {
        small = iValue2;
    }

    for(int i=2;i<small;i++)
    {
        if(((iValue1%i)==0)&&((iValue2%i)==0))
        {
            GCD = i;
        }
    }
    printf("GCD is %d",GCD);

    return 0;
}