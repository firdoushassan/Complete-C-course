#include <stdio.h>
float force(float mass);

int main()
{
    float body;
    printf("Enter the Mass of the body(in Kgs)\n");
    scanf("%f", &body);
    printf("The force of attraction is %.3f Newton", force(body));
    return 0;
}

float force(float mass)
{
    float f;
    f = mass * 9.8;
    return f;
}