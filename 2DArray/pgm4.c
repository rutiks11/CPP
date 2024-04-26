// Multiplication if Matrix

#include<stdio.h>

void MultofMat(int iRow1,int iCol1,int iRow2,int iCol2,int (*arr1)[iCol1],int (*arr2)[iCol2])
{
    int Res[iRow1][iCol2];

    for(int i=0;i<iRow1;i++)
    {
        for(int j=0;j<iCol2;j++)
        {
                Res[i][j] = 0;           
                for(int q=0;q<iCol2;q++)
                {
                    Res[i][j] += arr1[i][q] * arr2[q][j];    
                }
        }
    }

    printf("Multiplication of Array :: \n");

    for(int i =0; i<iRow1; i++)
    {
        for(int j = 0; j<iCol1;j++)
        {
            printf("%d\t",Res[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int iRow1 = 0, iCol1 = 0;
    int iRow2= 0 , iCol2 = 0;

    printf("Enter the Number of Rows and Cols of First Array :: ");
    scanf("%d%d",&iRow1,&iCol1);

    int arr1[iRow1][iCol1];
    int arr2[iRow1][iCol1];

    printf("Enter the Number of Rows and Columns of Second Array :: ");
    scanf("%d%d",&iRow2,&iCol2);

    // Filter
    if(iCol1 != iRow2)
    {
        printf("Warning : Number of Columns of First Array and Number of Rows of Second Array must be equal :: ");
        return 0;
    }

    printf("Enter Elements of Array1 :: \n");
    for(int i =0; i<iRow1; i++)
    {
        for(int j = 0; j<iCol1;j++)
        {
            printf("Arr1[%d][%d] :: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter Elements of Array2 :: \n");
    for(int i =0; i<iRow2; i++)
    {
        for(int j = 0; j<iCol2;j++)
        {
            printf("Arr2[%d][%d] :: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("Elements of Array1 :: \n");
    for(int i =0; i<iRow1; i++)
    {
        for(int j = 0; j<iCol1;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }

    printf("Elements of Array2 :: \n");
    for(int i =0; i<iRow2; i++)
    {
        for(int j = 0; j<iCol2;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }

    MultofMat(iRow1,iCol1,iRow2,iCol2,arr1,arr2);

    return 0;
}