#include <stdio.h>
void times(int *a);

int main()
{
    int a = 6;
    times(&a);
    printf("The value after 10 times is %d", a);
    return 0;
}

void times(int *a)
{
  int b;;
    b= *a*=10;
    
}