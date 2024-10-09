# include <stdio.h>
# include <string.h>

int main(){
    char *source = "hello world";
    char target[30];
    strcpy(target, source); // copy the contents of second string into the first one
    printf("After copying source,target is %s", target);
return 0;
}