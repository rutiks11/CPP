#include <stdio.h>

void Arithematic(int iNo1, int iNo2,int iChoice)
{
    int Quot = 0, Rem = 0;
    int Num = 0;

    switch (iChoice)
    {
    case 1:
        if(iNo1 == iNo2)
        {
            printf("Given Values are Equal\n");
        }
        else
        {
            printf("Given Values are not Equal\n");
        }
        break;
    
    case 2:
        if(iNo1 < iNo2)
        {
            printf("X is less than Y");
        }
        else
        {
            printf("Y is less than X");    
        }
        break;

    case 3:
        Quot = iNo1/ iNo2;
        Rem = iNo1 % iNo2;
        printf("Quotient :: %d Reminder :: %d",Quot,Rem);
        break;
    
    case 4:
        printf("Enter Number :: ");
        scanf("%d",&Num);
        if((Num >= iNo1)&&(Num <= iNo2))
        {
            printf("Number lies between Range.");
        }
        else
        {
            printf("Number not lies between Range.");    
        }

    case 5:
        iNo1 = iNo1 + iNo2;
        iNo2 = iNo1 - iNo2;
        iNo1 = iNo1 - iNo2;
        printf("%d\t",iNo1);
        printf("%d",iNo2);
        break;
        
    default:
        printf("Enter Correct Choice");
        break;
    }
}

int main()
{
    int iValue1 =0, iValue2 =0;
    int iChoice = 0;

    printf("Enter the Values :: ");
    scanf("%d%d",&iValue1,&iValue2);

    printf("Enter the Choice :: \n");
    printf("1. Equity Check if x is equal to y\n2. Less than Check if x is less than y\n3. Quatiant and Remainder Divide x by y and display the quotient and remainder\n");
    scanf("%d",&iChoice);

    Arithematic(iValue1,iValue2,iChoice);
    
    return 0;
}