// Write a C program to check whether a entered character is uppercase or lowercase alphabet

#include <stdio.h>

int main()
{   
    char cValue = '\0'; 
    
    printf("Enter the Character\n");
    scanf("%c",&cValue);

    if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Given Character is in Lowercase\n");
    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Given Character is in Uppercase\n");
    }

    return 0;
}