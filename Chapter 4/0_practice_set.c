#include <stdio.h>

int main()
{
    int n, prime = 1;
    printf("enter the number\t", n);
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0 && n != 2)
    {
        printf("The number is not prime");
    }
    else
    {
        printf("This is a prime number");
    }
    return 0;
}