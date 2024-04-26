// 1. Write a program to accept n numbers in an array and display the largest and smallest number. Using
// these values, calculate the range of elements in the array.

#include <stdio.h>
#include<stdlib.h>

void MinMax(int *ptr,int iSize)
{
    int iMin = ptr[0];
    int iMax = ptr[0];

    for(int i=0;i<iSize-1;i++)
    {
        if(iMin > ptr[i+1])
        {
            iMin = ptr[i+1];
        }
        if(iMax < ptr[i+1])
        {
            iMax = ptr[i+1];
        }
    }
    printf("Maximum Number :: %d\n",iMax);
    printf("Minimum Number :: %d",iMin);

    printf("Range of Array :: %d - %d",iMin-iMax);
}

int main()
{
    int iSize = 0;

    printf("Enter the size of an Array :: ");
    scanf("%d",&iSize);

    int *ptr = NULL;
    
    ptr = (int *) malloc (sizeof(int) * iSize);

    printf("Enter Elements of Array :: \n");
    for(int i=0;i<iSize;i++)
    {
        printf("Arr[%d] = ",i);
        scanf("%d",&ptr[i]);
    }

    printf("Elements of Array :: \n");
    for(int i=0;i<iSize;i++)
    {
        printf("Arr[%d] = %d\n",i, ptr[i]);
    }   

    MinMax(ptr,iSize);
    
    return 0;
}
