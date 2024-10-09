# include <stdio.h>
#include <string.h>

int main(){
    char st[11]= "hel ";
    char *st2= "hello";
    int val = strcmp(st, st2);//compares the two strings,returns 0 if the two strings are equal.
    // otherwise 1 or -1(according to ASCII values st-st2)
    printf("Now the value is %d", val);
return 0;
}