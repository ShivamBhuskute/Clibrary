#include <stdio.h>
#include <stdarg.h>

double average(int num, ...)
{
    va_list args;
    double sum = 0;

    va_start(args, num);

    for (int i = 0; i < num; i++)
    {
        sum += va_arg(args, double);
    }

    va_end(args);

    return sum / num;
}

int main()
{
    printf("%.2f\n", average(3, 12.2, 22.3, 4.5));

    printf("%.3f\n", average(5, 3.3, 2.2, 1.1, 5.5, 3.3));
    return 0;
}