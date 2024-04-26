#include <stdio.h>

int main()
{
    int iValue =0; 
    char cValue = '\0';

    printf("Enter the Character and Integer :: ");
    scanf("%c%d",&cValue,&iValue);

    printf("%c\t%d\n",cValue,iValue);

    for(int i=0;i<iValue;i++)
    {
        printf("%c\t",cValue);
        cValue++;
    }

    return 0;
}