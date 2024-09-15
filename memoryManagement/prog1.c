#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int size, i;

    printf("Enter a number of elements: ");
    scanf("%d", &size);

    ptr = (int *)malloc(size * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    else
    {
        printf("Memory successfully allocated.");

        for (i = 0; i < size; i++)
        {
            ptr[i] = i + 1;
        }

        printf("The elements of the array are: ");
        for (i = 0; i < size; i++)
        {
            printf("%d ", ptr[i]);
        }

        free(ptr);
    }
    return 0;
}