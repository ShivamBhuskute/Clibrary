#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    
    fptr = fopen("filename.txt", "w");

    if (fptr == NULL)
    {
        printf("The file is not opened the program will now exit");
        exit(0);
    } else {
        printf("The file is created successfully");
    }
    return 0;
}