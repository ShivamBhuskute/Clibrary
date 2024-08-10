#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);


    switch (a)
    {
    case 9:
        printf("Nine\n");
        
    case 8:
        printf("Eight\n");

    case 7:
        printf("Seven\n");

    case 6:
        printf("Six\n");

    case 5:
        printf("Five\n");
    
    case 4:
        printf("Four\n");

    case 3:
        printf("Three\n");

    case 2:
        printf("Two\n");

    case 1:
        printf("One\n");
        break;
    default:
        printf("Invalid integer.\n");
        break;
    }
return 0;
}
