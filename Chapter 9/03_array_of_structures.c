# include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};
int main(){
    struct employee facebook[100];
    facebook[1].code= 100;
    facebook[1].salary= 100.34;
    strcpy (facebook[1].name, "qwerty");
    facebook[2].code= 101;
    facebook[2].salary= 90.46;
    strcpy (facebook[2].name, "asdfg");
    facebook[3].code= 103;
    facebook[3].salary= 112.45;
    strcpy (facebook[3].name, "zxcvb");
    printf("done");
return 0;
}