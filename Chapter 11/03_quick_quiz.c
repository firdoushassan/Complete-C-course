#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    int n;
    printf("How many numbers you want to enter\n");
    scanf("%d", &n);
    ptr = (float *)malloc(n * sizeof(float));
    // ptr = (float *)calloc(n,sizeof(float));
    for (int i = 0; i < n; i++)
    {
        printf("Enter element no. %d\n", i + 1);
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of element no. %d is : %.2f\n", i + 1, ptr[i]);
    }
    printf("%u\n", &ptr[1]);
    free(ptr); // ---> to free the allocated location.
    ptr = (float *)malloc(1 * sizeof(float));
    // ptr = (float *)calloc(n,sizeof(float));
    for (int i = 0; i < 1; i++)
    {
        printf("Enter element no. %d\n", i + 1);
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 1; i++)
    {
        printf("The value of element no. %d is : %.2f\n", i + 1, ptr[i]);
    }
    printf("%u", &ptr[1]);
    return 0;
}