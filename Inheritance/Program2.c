// Accept a character from user and display ASCII value of it

#include <stdio.h>

int main()
{
    char cValue = '\0';
    
    printf("Enter the Character %c",&cValue);
    scanf("%c",&cValue);

    printf("Ascii Value of Character %c :: %d",cValue, cValue);
    
    return 0;
}