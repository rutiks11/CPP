// 2. Write a program to accept a matrix A of size mXn
// and store its transpose in matrix B. Display matrix B.

#include<stdio.h>

int main()
{
    int iRow = 0, iCol = 0;
    int total = 0;

    printf("Enter the Rows and Columns :: ");
    scanf("%d%d",&iRow,&iCol);

    int arr1[iRow][iCol];
    int arr2[iCol][iRow];
    
    printf("Enter Array Elements :: \n");
    for(int i=0;i < iRow;i++)
    {
        for(int j= 0; j < iCol; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }   

    printf(" Array Elements :: \n");
    for(int i=0;i < iRow;i++)
    {
        for(int j= 0; j < iCol; j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }

    
    for(int i=0;i < iRow;i++)
    {
        for(int j= 0; j < iCol; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
        printf("\n");
    }
    
    printf("Transpose :: \n");
    for(int i=0;i < iCol;i++)
    {
        for(int j= 0; j < iRow; j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}