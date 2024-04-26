//Wap which accept annual basic salary of an employee and calculate and display income tax

#include <stdio.h>

int main()
{
    int iSalary =0;

    printf("Enter the Basic salary :: ");
    scanf("%d",&iSalary);

    if(iSalary < 150000)
    {
        printf("Tax = 0");
    }
    else if((iSalary >= 150000) && (iSalary <= 300000))
    {
        printf("Tax %f",((20*iSalary)/100.0));
    }
    else if(iSalary > 300000)
    {
        printf("Tax %f",((30*iSalary)/100.0));
    }
    else
    {
        printf("Enter Correct Salary");
    }

    return 0;
}