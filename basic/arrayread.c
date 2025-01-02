#include <stdio.h>

int main()
{
    int a[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter the element at %d: ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("The element at index %d is %d\n", i, a[i]);
    }

    return 0;
}
