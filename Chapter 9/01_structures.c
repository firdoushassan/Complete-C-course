# include <stdio.h>
#include <string.h>
    struct employee{
        int code;
        float salary;
        char name[20];
    };
int main(){
    struct employee e1;
    e1.code = 100;
    e1.salary =34.987;
    // e1.name ="qwerty"; -->won't work
    strcpy(e1.name ,"Qwerty");
    printf("%s\n", e1.name);
    printf("%d\n", e1.code);
    printf("%.3f\n", e1.salary);
    

return 0;
}