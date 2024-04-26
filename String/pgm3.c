// 3. Write a menu driven program to perform the following operations on strings using standard library
// functions: Length, Copy, Concatenation, Compare, Reverse, Uppercase, Lowercase, Check case.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    int iChoice = 0;
    char arr[100];  

    printf("Enter String :: ");
    fgets(arr, sizeof(arr), stdin);

    int length = 0;
    char dest[100]; 

    do {
        printf("\nEnter Choice:: \n1.Length\n2.Copy\n3.Concatenation\n4.Compare\n5.Reverse\n6.Uppercase\n7.Lowercase\n8.Checkcase\n9.Exit\n");
        scanf("%d", &iChoice);

        switch (iChoice) {
            case 1:
                length = strlen(arr);
                printf("Length of String :: %d\n", length);
                break;

            case 2:
                strcpy(dest, arr);
                printf("Copied String :: %s\n", dest);
                break;

            case 3:
                printf("Enter string to concatenate :: ");
                getchar(); 
                fgets(dest, sizeof(dest), stdin);
                dest[strcspn(dest, "\n")] = '\0'; // Remove the trailing newline character
                strcat(arr, dest);
                printf("Concatenated String :: %s\n", arr);
                break;

            case 4:
                printf("Enter string to compare :: ");
                getchar();
                fgets(dest, sizeof(dest), stdin);
                dest[strcspn(dest, "\n")] = '\0'; // Remove the trailing newline character
                int flag = strcmp(arr, dest);
                if (flag == 0) {
                    printf("Strings are equal\n");
                } else if (flag < 0) {
                    printf("String1 is greater\n");
                } else {
                    printf("String2 is greater\n");
                }
                break;

            case 5:
                strrev(arr);
                printf("Reversed String :: %s\n", arr);
                break;

            case 6:
                for (int i = 0; arr[i] != '\0'; i++) {
                    arr[i] = toupper(arr[i]);
                }
                printf("Uppercase String :: %s\n", arr);
                break;

            case 7:
                for (int i = 0; arr[i] != '\0'; i++) {
                    arr[i] = tolower(arr[i]);
                }
                printf("Lowercase String :: %s\n", arr);
                break;

            case 8:
                printf("Uppercase characters: ");
                for (int i = 0; arr[i] != '\0'; i++) {
                    if (isupper(arr[i])) {
                        printf("%c ", arr[i]);
                    }
                }
                printf("\n");

                printf("Lowercase characters: ");
                for (int i = 0; arr[i] != '\0'; i++) {
                    if (islower(arr[i])) {
                        printf("%c ", arr[i]);
                    }
                }
                printf("\n");
                break;

            case 9:
                printf("Exit\n");
                break;

            default:
                printf("Invalid Choice\n");
                break;
        }
    } while (iChoice != 9);

    return 0;
}