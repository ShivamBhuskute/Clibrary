#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int number[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        if (number[i] % 3 == 0 && number[i] % 12 == 0)
        {
            count++;
        }
    }
    printf("%d", count);
}