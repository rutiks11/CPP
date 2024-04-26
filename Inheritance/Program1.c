// Accept the radius from user and compute the area and circumference of circle

#include <stdio.h>
#include <math.h>

float CircumferenceofCircle(int radius)
{
    float Circumference = 0.0f;

    Circumference = 2 * 3.14 * radius;

    return Circumference;
}

float areaofCircle(int radius)
{
    float area = 0.0f;

    area = 3.14 * pow(radius , 2);

    return area;
}

int main()
{
    float fRadius = 0;
    float area = 0;
    float Circumference = 0;

    printf("Enter the radius of the Circle :: ");
    scanf("%f",&fRadius);

    area = areaofCircle(fRadius);
    printf("Area of circle is  :: %f  \n", area);

    Circumference = CircumferenceofCircle(fRadius);
    printf("Circumference of Circle is :: %f  \n", Circumference );

    return 0;
}
