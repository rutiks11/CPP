// Accept dimensions of a cylinder and print the surface
// area and volume 

#include <stdio.h>

int main()
{
    float fRadius = 0.0f;
    float fHeight = 0.0f;
    float Area = 0.0f;
    float Pi = 3.14;

    printf("Enter the Height of the Cylinder\n");
    scanf("%f",&fRadius);

    printf("Enter the Radius of the Cylinder\n");
    scanf("%f",&fHeight);

    Area = ((2 * Pi * fRadius * fHeight) + (2 * Pi * fRadius * fRadius)); 
    printf("Area of Cylinder %.2f", Area);

    return 0;
}