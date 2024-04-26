#include <stdio.h>
#include <stdbool.h>

int main()
{
    int iValue = 0;
    bool flag = false;

    printf("Enter the Value  :: ");
    scanf("%d", &iValue);

    for (int i = 2; i <= iValue; i++)
    {
        flag = false;
        for (int j = 2; j <= (i / 2); j++)
        {
            if ((i % j) == 0)
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}