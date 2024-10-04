# include <stdio.h>

int main(){
    int i=0,factorial=1;
    int a;
    printf("No. of which factorial is to be found\t", a);
    scanf("%d", &a);
    for(i=1;i<=a;i++){
    factorial*=i;
    }
    printf("The value of the factorial of %d is %d", a, factorial);
return 0;
}