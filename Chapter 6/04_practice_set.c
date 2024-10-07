# include <stdio.h>

int main(){
    int a=6;
    printf("The address of variable a is %u\n", &a);
    printf("The value of variable a is %d\n", *(&a));

return 0;
}