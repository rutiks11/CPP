// Accept marks of 5 subjects of a students and display total marks and 
// compute the percentage also

#include <stdio.h>

int main()
{
    int subj1[5];
    int iSum = 0;
    float Percentage = 0.0f;

    printf("Enter the Marks of 5 Subjects out of 100 :: \n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&subj1[i]);
    }

    printf("Marks of 5 Subjects :: ");

    for(int i = 0; i < 5; i++)
    {
        printf("%d\t",subj1[i]);
    }

    for(int i = 0; i< 5; i++)
    {
        iSum = iSum + subj1[i];
    }

    printf("\nTotal Marks of Subject :: %d\n", iSum);

    Percentage = (iSum / 500.0 ) * 100;

    printf("Percentage is equal to :: %.2f",Percentage);
    
    return 0;
}