// 2. Write a program to accept an array of n elements and a number say key. Check whether key is present
// in the array or not.

#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkKey(int *ptr,int iSize,int iNo)
{
    bool flag = false;

    for(int i=0;i<iSize;i++)
    {
        if(ptr[i] == iNo)
        {
            flag = true;
        }
    }
    return flag;
}

int main()
{
    int iSize = 0;
    bool flag = false;
    int iValue = 0;
    bool bRet = false;

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

    bRet = ChkKey(ptr,iSize,iValue);
    
    if(bRet == false)
    {
        printf("Given Number is not Present in Array.");
    }
    else
    {
        printf("Given Number is present in Array\n");
    }
    return 0;
}
