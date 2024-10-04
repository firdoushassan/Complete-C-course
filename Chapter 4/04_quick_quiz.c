#include <stdio.h>

int main()
{
    int a = 1, n;
    printf("Enter the value upto which natural numbers are to be print\t", n);
    scanf("%d", &n);
    do
    {
        printf("The first 10 natural numbers are %d\n", a++);
    } while (a <= n);
    return 0;
}