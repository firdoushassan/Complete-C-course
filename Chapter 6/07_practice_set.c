#include <stdio.h>
void sumAndavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;

    *avg = (float)*sum / 2;
}

int main()
{
    int a = 4, b = 8, sum;
    float avg;
    sumAndavg(a, b, &sum, &avg);
    printf("The sum is %d\n", sum);
    printf("The average is %.2f\n", avg);
    return 0;
}