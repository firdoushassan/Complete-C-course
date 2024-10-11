# include <stdio.h>

int main(){
    FILE *ptr;
    int num = 4652;
    ptr = fopen("Generated.txt", "w");
    fprintf(ptr, "%d\n", num);
    fprintf(ptr, "Thanks\n", num);
    fclose(ptr);
return 0;
}