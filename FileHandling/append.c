#include <stdio.h>

int main() {
    const char *filename = "example.txt";
    const char *text_to_append = "This text will be appended to the file.\n";

    // Open the file in append mode
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Write the text to the file
    if (fputs(text_to_append, file) == EOF) {
        perror("Error writing to file");
        fclose(file);
        return 1;
    }

    printf("Text appended successfully to %s\n", filename);

    // Close the file
    fclose(file);
    return 0;
}
