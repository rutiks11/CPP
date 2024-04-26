// Digit to Word

#include <stdio.h>

int DigitoWord(int iNo)
{
    if((iNo < 0) && (iNo > 9))
    {
        printf("Please enter correct digit");
        return 0;
    }

    switch (iNo)
    {
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    case 5:
        printf("Five\n");
        break;
    case 6:
        printf("Six\n");
        break;
    case 7:
        printf("Seven\n");
        break;
    case 8:
        printf("Eight\n");
        break;
    case 9:
        printf("Nine\n");
        break;
    case 0:
        printf("Zero\n");
        break;
    }
    return 0;
}
int main()
{
    int iValue = 0;

    printf("Enter the Digit :: ");
    scanf("%d",&iValue);
    
    DigitoWord(iValue);

    return 0;
}