#include<stdio.h>
int main()
{
    int myNum[4] = {1, 2, 3, 4};
    
    for(int i = 0; i < 4; i++){
        printf("%p\n", &myNum[i]);
    }
}