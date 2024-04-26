// Accept the basic salary of an employe and compute the net salary after adding earning and 
// subtracting deduction

#include <stdio.h> 

int main()
{
    int iBasicSalary = 0;
    float PF = 0;
    float Tax = 0;
    float HRA = 0;
    float DA = 0;
    float fNetSalary = 0;

    printf("Enter the Basic Salary :: ");
    scanf("%d",&iBasicSalary);

    PF = (2 * iBasicSalary) * 100;
    Tax = (3 * iBasicSalary) * 100;
    HRA = (5 * iBasicSalary) * 100;
    DA = (8 * iBasicSalary) * 100;
    
    fNetSalary = iBasicSalary - PF - Tax - HRA + DA;

    printf("NetSalary = %f",fNetSalary);
    
    return 0;
}