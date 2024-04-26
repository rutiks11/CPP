#include<stdio.h>

int main()
{
    int iRow = 0, iCol = 0;
    int total = 0;

    printf("Enter the Rows and Columns :: ");
    scanf("%d%d",&iRow,&iCol);

    int arr[iRow][iCol];

    
    printf("Enter Array Elements :: ");
    for(int i=0;i < iRow;i++)
    {
        for(int j= 0; j < iCol; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }   

    printf("Array Elements :: ");
    for(int i=0;i < iRow;i++)
    {
        for(int j= 0; j < iCol; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i < iRow;i++)
    {
        total = 0;
        for(int j= 0; j < iCol; j++)
        {
            total = total + arr[i][j];
        }
        printf("Total Row %d:: %d\n",i,total);
    }
    
    for(int i=0;i < iRow;i++)
    {
        total = 0;
        for(int j= 0; j < iCol; j++)
        {
            total = total + arr[j][i];
        }
        printf("Total col %d:: %d\n",i,total);
    }

    return 0;
}