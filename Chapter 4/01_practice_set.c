# include <stdio.h>

int main(){
    int a, b;
    printf("Enter a  \n", a);
    scanf("%d", &a);
    printf("Enter b  \n", b);
    
    scanf("%d", &b);
    for(a;b;b--){
        printf("%d multiplied by %d = %d\n", a, b, a*b);
    }
return 0;
}