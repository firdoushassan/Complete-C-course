#include <stdio.h>

int main()
{
    int a, b;
    printf("number ?\n", a);
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("Number is even\n", a);
    }
    else
    {
        printf("Number is odd\n");
    }

    int c;
    printf("Enter age\n", c);
    scanf("%d", &c);
    
    if(c > 90)
    {
        printf("You are overage,you cannot drive\n");
    }
    if (c < 18)
    {
        printf("You are underage,you cannot drive\n");
    }
    else
    {
        printf("You can drive\n");
    }
    return 0;
}