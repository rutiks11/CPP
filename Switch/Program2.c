// Arithmetic

#include <stdio.h>

void Arithematic(int iNo1,int iNo2,int operation)
{
    switch (operation)
    {
    case 1:
        printf("%d + %d = %d",iNo1, iNo2, iNo1 + iNo2);
        break;
    case 2:
        printf("%d - %d = %d",iNo1, iNo2, iNo1 - iNo2);
        break;
    case 3:
        printf("%d * %d = %d",iNo1, iNo2, iNo1 * iNo2);
        break;
    case 4:
        printf("%d / %d = %d",iNo1, iNo2, iNo1 / iNo2);
        break;
    default:
        printf("Enter Correct Value.");
    }

}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    int operation = 0;

    printf("Enter the Digit :: ");
    scanf("%d%d",&iValue1,&iValue2);

    printf("Enter the Number that you want to perform :: \n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d",&operation);

    Arithematic(iValue1,iValue2,operation);

    return 0;
}