// ii) Display the trace of the matrix (sum of diagonal elements).

#include<stdio.h>
#include<stdlib.h>

int Trace(int *ptr,int iSize)
{
    int sum = 0;
    for(int i=0;i<iSize; i++)
    {
        for(int j=0; j<iSize;j++)
        {
            if(i==j)
            {
                sum = sum + ptr[i*iSize+j];            
            }
        }
    }

    return sum;
} 

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Value :: ");
    scanf("%d",&iValue);

    int *arr = (int *)malloc(sizeof(int) * iValue*iValue);

    printf("Enter Array Elements :: \n");
    for(int i=0;i<iValue*iValue;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Display Elements of Array :: ");
    for(int i=0; i<iValue ; i++)
    {
        for(int j =0; j<iValue ; j++)
        {
            printf("%d",arr[i * iValue + j]);
        }
        printf("\n");
    }

    iRet = Trace(arr,iValue);
    printf("%d",iRet);
    
    free(arr);

    return 0;
}