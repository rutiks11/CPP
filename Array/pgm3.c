// 3. Write a program to accept an integer array and an integer say num and counts the occurrences of the
// num in the array.


#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int ChkKey(int *ptr,int iSize,int iNo)
{
    int iCount = 0;

    for(int i=0;i<iSize;i++)
    {
        if(ptr[i] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0;
    int iValue = 0;
    int iRet = 0;

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

    printf("Enter key to search:: ");
    scanf("%d",&iValue);

    iRet = ChkKey(ptr,iSize,iValue);
    
    
    printf("Number of Occurence is %d",iRet);
    
    return 0;
}
