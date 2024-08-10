
#include<stdio.h>

int main()
{
    int temp;
    char unit;
    float fahr, celc;
    printf("Enter the temperature: \n");
    scanf("%d", &temp);

    printf("Enter the initial of unit of temperature: \n");
    scanf(" %c", &unit);

    if (unit == 'c' || unit == 'C')
    {
        fahr = (temp * 1.8) + 32;
        printf("%f\n", fahr);

    }
    else if (unit == 'f' || unit == 'F')
    {
        celc = (temp - 32) / 1.8;
        printf("%f\n", celc);
    }
    else
    {
        printf("Error: Invalid unit initial.\n");
    }

    return 0;
}
