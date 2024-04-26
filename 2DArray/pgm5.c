// 4. Write a program to perform the following operations on a square matrix. Write
// i) Check if the matrix is symmetric.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ChkSymmetric(int *ptr,int iSize)
{
    bool flag = true;

    for(int i=0;i<iSize; i++)
    {
        for(int j=0; j<iSize;j++)
        {
            if(!(ptr[i*iSize + j] == ptr[j*iSize + i]))
            {
                flag = false;            
            }
        }
    }
    return flag;
} 

int main()
{
    int iValue= 0;
    bool bRet = false;

    printf("Enter number of columns and Row for square matrix :: ");
    scanf("%d",&iValue);

    int *arr = (int *)malloc(sizeof(int)* iValue*iValue);

    printf("Enter Elements of Array :: \n");
    for(int i =0; i<iValue*iValue; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Display elements of Array :: \n");
    for(int i =0; i<iValue; i++)
    {
        for(int j =0; j<iValue;j++)
        {
            printf("%d\t",arr[i*iValue + j]);
        }
        printf("\n");
    }
    
    bRet = ChkSymmetric(arr,iValue);

    if(bRet == true)
    {
        printf("Array is Symmetric");
    }   
    else
    {
        printf("Array is not Symmetric");
    }
    
    free(arr);

    return 0;
}