#include <stdio.h>

int main()
{
    float principal, rate, years;
    printf("Enter the Principal amount\t", principal);
    scanf("%f", &principal);
    printf("Enter the rate of interest\t", rate);
    scanf("%f", &rate);
    printf("Enter the amount of time in years\t", years);
    scanf("%f", &years);
    float interest = (principal * rate * years) / 100;
    printf("Simple interst is %f", interest);

    return 0;
}