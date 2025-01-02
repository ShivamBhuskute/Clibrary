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

    celc = (temp - 32) / 1.8;
    fahr = (temp * 1.8) + 32;

    switch(unit)
    {
        case 'c' :
        printf("%f\n", fahr);
        break;

        case 'C' :
        printf("%f\n", fahr);
        break;

        case 'f':
        printf("%f\n", celc);
        break;

        case 'F':
        printf("%f\n", celc);
        break;

        default:
        printf("Error: Invalid unit initial.");
    }
return 0;
}