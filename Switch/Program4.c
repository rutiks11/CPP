#include <stdio.h>
#include <math.h>

float Calculate(int choice, int iRadius)
{
    switch (choice)
    {
    case 1:
        printf("Area of Circle :: %f",3.14 * pow(iRadius,2));
        break;
    
    case 2:
        printf("Circumference of Circle :: %f",2 * 3.14 * iRadius);
        break;
    
    case 3:
        printf("Volume of Sphere :: %f",(4*3.14*pow(iRadius,3))/3);
        break;
    
    default:
        printf("Enter correct  Choice");
        break;
    }
}

int main()
{
    int iChoice = 0;    
    int iRadius = 0;    
    
    printf("Enter radius of the circle :: ");
    scanf("%d",&iRadius);

    printf("1. Area of Circle\n2. Circumference of Circle\n3. Volume of Sphere\nEnter Choice ::");
    scanf("%d",&iChoice);

    Calculate(iChoice,iRadius);
    

    return 0;
}