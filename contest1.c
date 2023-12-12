#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = 0;
    for ( int i = 0; i <= n; i++){
        s += i;
    }
    printf("%d",s);
}