#include<stdio.h>
int main()
{
    int a, d1, d2, d3, d4;
    scanf("%d", &a);

    d1 = a % 10;
    d2 = (a % 100) / 10;
    d3 = (a % 1000) / 100;
    d4 = a / 1000;

    int num = 1000 * d1 + 100 * d2 + 10 * d3 + d4;
    printf("%d\n", num); 

}