#include <stdio.h>
#include <string.h>
typedef struct employee
{
    char name[20];
    float salary;
} emp;

int main()
{
    FILE *ptr;
    emp employee[2];
    for (int i = 0; i < 2; i++)
    {

        printf("Enter name of employee No. %d\n", i + 1);
        scanf("%s", &employee[i].name);
        printf("Enter salary of employee No. %d\n", i + 1);
        scanf("%f", &employee[i].salary);
    }
    ptr = fopen("Employee_details.txt", "w");
    for (int i = 0; i < 2; i++)
    {
        fprintf(ptr, "%s , %.3f\n", employee[i].name, employee[i].salary);
    }
    fclose(ptr);
    return 0;
}