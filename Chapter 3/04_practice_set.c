#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the 1st number\n", a);
    scanf("%d", &a);
    printf("Enter the 2nd number\n", b);
    scanf("%d", &b);
    printf("Enter the 3rd number\n", c);
    scanf("%d", &c);
    printf("Enter the 4th number\n", d);
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is the greatest among all\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is the greatest among all\n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d is the greatest among all\n", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("%d is the greatest among all\n", d);
    }

    return 0;
}