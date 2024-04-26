// 4. Write a program to accept n numbers from the user and store them in an array. Then sort the array in
// descending order and display it.

#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Desc(int *ptr,int iSize)
{
    int temp = 0;

    for(int i=0;i<iSize;i++)
    {
        for(int j=i+1;j<iSize;j++)
        {
            if(ptr[i] > ptr[j])
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp; 
            }
        }
    }
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

    
    Desc(ptr,iSize);
    
    printf("Elements of Array :: \n");
    for(int i=0;i<iSize;i++)
    {
        printf("Arr[%d] = %d\n",i, ptr[i]);
    }   
    
    return 0;
}
