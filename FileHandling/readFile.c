#include <stdio.h>
#include <string.h>
int main()
{
    FILE *filePointer;

    char dataToBeRead[50];

    filePointer = fopen("GFG.c", "r");

    if (filePointer == NULL)
    {
        printf("File failed to open");
    }
    else
    {
        printf("The file is now opened.\n");

        while (fgets(dataToBeRead, 50, filePointer) != NULL)
        {
            printf("%s", dataToBeRead);
        }

        fclose(filePointer);

        printf("Data successfully read from file.\n");
        printf("The file is now closed");
    }
    return 0;
}