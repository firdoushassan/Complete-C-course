#include <stdio.h>

int main()
{
    int n, l = 0, i;
    printf("Enter the number of steps to be in the pattern\n");
    scanf("%d", &n);
    for (int i = 1; i <= (2 * n - 1); i += 2)
    {

        for (l = 1; l <= i; l++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}