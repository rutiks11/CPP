// string concat 

#include<stdio.h>

void strcatX(char *src, char *dest)
{
    while(*src != '\0')
    {
        src++;      
    }

    *src = ' ';
    src++;

    while((*dest) != '\0')
    {
        *src = *dest;
        dest++;
        src++;
    }

    (*src) = '\0';
}

int main()
{
    char arr[50];
    char brr[50];

    printf("Enter first String :: ");
    scanf("%[^\n]s",&arr);

    printf("Enter second string :: ");
    scanf(" %[^\n]s",&brr);

    strcatX(arr,brr);

    printf("%s",arr);
    
    return 0;
}