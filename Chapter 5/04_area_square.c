#include <stdio.h>
#include <math.h>
int main()
{
    int side;

    printf("Enter the side of the square ", side);
    scanf("%d", &side);
    printf("The area of the square is %d",(int)pow(side, 2));
    return 0;
}