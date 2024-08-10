#include <stdio.h>

int main(){
    int a = 6;
    int right_shift = 2;

    int result = a >> right_shift;

    printf("Original number: %d\n", a);
    printf("Result after shift: %d\n", result); 
return 0;
}