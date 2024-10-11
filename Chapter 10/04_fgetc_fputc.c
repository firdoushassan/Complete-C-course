# include <stdio.h>

int main(){
    FILE *ptr;
    // ptr = fopen("getcdemo.txt", "r");
    // char c = fgetc(ptr); //used to read character file
    // printf("%c\n", c);

    ptr = fopen("putcdemo.txt", "w");
    putc('c',ptr);
    fclose(ptr);
return 0;
}