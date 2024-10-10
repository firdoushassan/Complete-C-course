#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};
void show(struct employee emp)
{
    printf("The name of employee is : %s\n", emp.name);
    printf("The code of employee is : %d\n", emp.code);
    printf("The salary of employee is : %.2f\n", emp.salary);
}
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    ptr->code = 101;
    ptr->salary = 1462.23;
    strcpy(ptr->name, "qwerty");
    show(e1);
    return 0;
}