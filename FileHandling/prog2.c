#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *filePointer;

    char dataToBeWritten[50] = "// GFG - A Computer science portal";

    filePointer = fopen("GFG.c", "w");

    if (filePointer == NULL)
    {
        printf("The file failed to open");
    }
    else
    {
        printf("The file is now opened\n");

        if (strlen(dataToBeWritten) > 0)
        {
            fputs(dataToBeWritten, filePointer);
            fputs("\n", filePointer);
        }

        fclose(filePointer);

        printf("Data successfully written in GFG.c file\n");
        printf("The file is now closed");
    }

    return 0;
}