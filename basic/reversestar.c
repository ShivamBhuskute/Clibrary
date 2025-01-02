#include<stdio.h>
int main()
{

    int a;
    scanf("%d", &a);
    
    int i, j;
    for(i=a;i>=0;i--)
    {
        for(j=1;j<=i;j++)
            printf("*");
    printf("\n");
    }
    return 0;
}