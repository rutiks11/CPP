#include <stdio.h>

int main()
{
    int iChoice = 0;
    int iRadius = 0, length = 0, heigth = 0, breadth = 0;
    float Area = 0;

     printf("\nEnter the Choice\n1.Area of Circle\n2.Area of Rectangle\n3.Area of Triangle\n4.Exit\n");
        
    do
    {
       scanf("%d",&iChoice);
        switch (iChoice)
        {
        case 1:
        
            printf("Enter Radius of Circle :: ");
            scanf("%d", &iRadius);
            Area = 3.14 * iRadius * iRadius;
            printf("Area of Circle %f\n", Area);
            break;

        case 2:
            printf("Enter of Length and breadth of Rectangle ::");
            scanf("%d%d", &length, &breadth);
            printf("Area if Rectangle :: %d\n", length * breadth);
            break;

        case 3:
            printf("Enter the length and height of Triangle :: ");
            scanf("%d%d",&length,&breadth);
            Area = (length * breadth) / 2;
            printf("Area %f\n", Area);
            break;

        case 4:
            printf("Exit\n");
            break;

        default:
            printf("Enter Valid Choice\n");
            break;
        }
        }
        while(iChoice != 4);

        return 0;
    }