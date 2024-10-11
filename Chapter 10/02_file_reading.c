# include <stdio.h>

int main(){
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("sample.txt", "r");
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);
    printf("%d\n", num);
    printf("%d\n", num2);
    
return 0;
}