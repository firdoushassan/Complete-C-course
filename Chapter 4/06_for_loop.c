#include <stdio.h>

int main()
{
    // for(int a=0;a<10;a+=3){
    //     printf("The values are %d \n", a);
    // }
    int n;
    printf("Enter value\n", n);
    scanf("%d", &n);
    for (int a = 1; a <= n; a++)
    {
        printf("The natural numbers are %d\n", a);
        break;
    }
    
    return 0;
}