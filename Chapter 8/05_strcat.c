# include <stdio.h>
# include <string.h>

int main(){
    char st[11]= "hello ";
    char *st2= "world";
    strcat(st, st2); // Adds the two strings together(no space is given inbetween)
    printf("%s", st);
return 0;
}