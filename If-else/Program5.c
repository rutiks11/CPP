#include<stdio.h>

int main()
{
    int iValue1 = 0, iValue2 =0 , iValue3;
    int SumofAngles = 0;

    printf("Enter the angle of Triangle :: ");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    SumofAngles = iValue1 + iValue2 + iValue3;

    if(SumofAngles == 180)
    {
        printf("It is triangle");
    }
    else
    {
        printf("It is not triangle");
    }
    
    return 0;
}