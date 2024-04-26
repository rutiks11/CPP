// Wap to accept 3 numbers and compute minimum and maximum from them

#include <stdio.h>

int main()
{
    int iValue1 =0, iValue2 = 0 , iValue3 =0;
    int iMax = 0;

    printf("Enter the Three Values :: ");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    if(iValue1 > iValue2)
    {
        if(iValue1 > iValue3)
        {
            iMax = iValue1;
        }
        else
        {
            iMax = iValue3;
        }
    }
    else
    {
        if(iValue2 > iValue3)
        {
            iMax = iValue2;
        }
        else
        {
            iMax = iValue3;    
        }
    }

    printf(" Maximum :: %d",iMax);

    return 0;
}