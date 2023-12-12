#include <stdio.h>
int main()
{
    int a[10];
    int i, sum = 0;
    printf("Enter elements in aray: \n");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i <= 9; i++)
    {
        sum += a[i];
    }
    printf("The total is %d", sum);
    return 0;
}