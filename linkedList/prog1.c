#include <stdio.h>
#include <stdlib.h>

struct node
{
    int x;
    struct node *next;
};

int main()
{
    struct node *root;
    struct node *conductor;

    root = malloc(sizeof(struct node));
    root->next = 0;
    root->x = 12;
    conductor = root;

    if (conductor != 0)
    {
        while (conductor != NULL)
        {
            printf("%d\n", conductor->x);
            conductor = conductor->next;
        }
        // printf("%d\n", conductor->x);
    }

    // conductor->next = malloc(sizeof(struct node));
    // conductor = conductor->next;

    // if (conductor == 0)
    // {
    //     printf("Out of memory");
    //     return 0;
    // }

    // conductor->next = 0;
    // conductor->x = 42;
    return 0;
}