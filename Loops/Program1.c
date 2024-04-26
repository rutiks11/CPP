#include<stdio.h>

int main()
{
    int iRet = 0;
    int Arr[50];
    int i = 0;

    printf("Enter Values :: ");
    
    do
    { 
        scanf("%d",&Arr[i]);
        iRet = iRet + Arr[i];
        i++;
    }while(Arr[i-1] > 0);
    
    printf("Sum of numbers %d",iRet);
    return 0;
}