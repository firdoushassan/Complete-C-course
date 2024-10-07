#include <stdio.h>

int main()
{
    int i = 222;
    int *a;
    int **b;
    a = &i;
    b = &a;
    printf("The value of i is %d", **b);
    return 0;
}