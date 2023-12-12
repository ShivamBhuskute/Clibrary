// wap to read matrix of 3x5 and print sum of it

#include <stdio.h>
int main() {
    int matrix[3][5];
    int i, j, sum = 0;

    printf("enter the elements of the matrix:\n");

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 5; j++) 
        {
            printf("enter element at position (%d,%d): ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements in the matrix: %d\n", sum);

    return 0;
    
}
