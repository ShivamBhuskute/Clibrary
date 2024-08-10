#include<stdio.h>
int main()
{
    int a, b, c, d, e, sum;
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    sum = a + b + c+ d + e;
    float per = sum/5;
    if(a>=35 && b>=35 && c>=35 && d>=35 && e>=35)
    {
        if(per>85)
        {
            printf("Student has passed with distinction.");
        }
        else if(per>60)
        {
            printf("Student has passed with first class.");
        }
        else{
            printf("Student has passed.");
        }
    }   
    else{
    printf("Student has failed.");}

    return 0;
    
}
