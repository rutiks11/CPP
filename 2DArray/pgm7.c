// iii) Check if the matrix is an upper triangular matrix.


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ChkUprTriangular(int *ptr,int iSize)
{
    bool flag = false;

    for(int i=0;i<iSize; i++)
    {
        for(int j=0; j<iSize;j++)
        {
            if(((i>j) && (!(ptr[i*iSize+j]==0))))
            {
                flag = true;            
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
    
    bRet = ChkUprTriangular(arr,iValue);

    if(bRet == true)
    {
        printf("Array is not Uppertriangular");
    }   
    else
    {
        printf("Array is Uppertriangular");
    }
    
    free(arr);

    return 0;
}