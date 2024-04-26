// Accept lowercase character from the user and check whether the character is vowel or consonent

#include<stdio.h>

int main()
{
    char cValue = '\0';

    printf("Enter the Character\n");
    scanf("%c",&cValue);

    if((cValue == 'a') || (cValue == 'e') || (cValue == 'i') || (cValue == 'o') || (cValue == 'u') || (cValue == 'A') || (cValue == 'E') || (cValue == 'I') || (cValue == 'O') || (cValue == 'U'))
    {
        printf("Given Letter is Vowel");
    }
    else
    {
        printf("Given Letter is Consonent");
    }

    return 0;
}