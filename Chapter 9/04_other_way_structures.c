#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct employee facebook01 = {100, 462.54, "Qwerty"};
    printf("done\n");
    printf("Name is %s\n", facebook01.name);
    printf("Code is %d\n", facebook01.code);
    printf("Salary is $%.2f\n", facebook01.salary);
    // printf("Name is %u\n", &facebook01.name);
    // printf("Code is %u\n", &facebook01.code);
    // printf("Salary is %u\n", &facebook01.salary);
    return 0;
}