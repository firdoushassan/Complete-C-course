# include <stdio.h>

int main(){
    FILE *ptr;
    int a,b,c;
    ptr= fopen("integer.txt", "r");
    fscanf(ptr, "%d %d %d", &a,&b, &c);
    printf("%d %d %d", a, b, c);
return 0;
}