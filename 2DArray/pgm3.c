// 2. Write a program to accept a matrix A of size mXn and 
// store its transpose in matrix B. Display matrix B.

#include<stdio.h>

int main()
{
    int iRow = 0;
    

    printf("Enter the Rows and Columns :: ");
    scanf("%d",&iRow);

    int arr1[iRow][iRow];
    int arr2[iRow][iRow];

    int arr3[iRow][iRow];

    printf("Enter Elements of Array1 :: ");
    for(int i=0;i < iRow;i++)
    {
        for(int j= 0; j < iRow; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }   
    
    printf("Enter Elements of Array2 :: ");
    for(int i=0;i < iRow;i++)
    {
        for(int j= 0; j < iRow; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i < iRow;i++)
    {
        for(int j= 0; j < iRow; j++)
        {
            arr3[i][j]= arr2[i][j] + arr1[i][j];
        }
        printf("\n");
    }
    
    printf("Addition of Matrix :: \n");
    for(int i=0;i < iRow;i++)
    {
        for(int j= 0; j < iRow; j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}