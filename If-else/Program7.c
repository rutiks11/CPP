// Wap accept a character and ivert the case of it

#include <stdio.h>

int main()
{
    char cValue  = '\0';

    printf("Enter the Character :: ");
    scanf("%c",&cValue);

    if((cValue >= 'a') && (cValue <= 'z'))
    {
        cValue = cValue - 32;
    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        cValue = cValue + 32;
    }
    else
    {
        printf("Invalid Character");
    }

    printf("Updated Character :: %c", cValue);

    return 0;
}