// 1. Write a program which accepts a sentence from the user and alters it as follows: Every space is
// replaced by *, case of all alphabets is reversed, digits are replaced by?

#include <stdio.h>

void Edit(char *ptr) {
        while((*ptr) != '\0') 
        {
            if (*ptr == ' ') {
                *ptr = '*';
            }
            else if ((*ptr >= 'a') && (*ptr <= 'z'))
            {
                *ptr = *ptr - 32;  // Convert to uppercase
            } 
            else if ((*ptr >= 'A') && (*ptr <= 'Z'))
            {
                *ptr = *ptr + 32;  // Convert to lowercase
            }else if ((*ptr >= '0') && (*ptr <= '9')) 
            {
            *ptr = '$';
            }
            
        ptr++;
    }
    
}

int main() {
    char arr[20];

    printf("Enter the String :: ");
    // scanf("%[^\n]s", arr);

    fgets(arr,sizeof(arr),stdin);
    Edit(arr);

    printf("%s\n", arr);

    return 0;
}
