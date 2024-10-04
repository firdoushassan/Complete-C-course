# include <stdio.h>

int main(){
    int marks;
    printf("Enter the marks(0-100)\n", marks);
    scanf("%d", &marks);
    switch (marks/10){
        case 10 :
        case 9:
        printf("Your grade is A\n");
        break;
        case 8:
        printf("Your grade is B\n");
        break;
        case 7:
        printf("Your grade is C\n");
        break;
        case 6:
        printf("Your grade is D\n");
        break;
        case 5:
        printf("Your grade is E\n");
        break;
        case 4:
        printf("Your grade is F\n");
        break;
        case 3:
        printf("Your grade is F\n");
        break;
        case 2:
        printf("Your grade is F\n");
        break;
        case 1:
        printf("Your grade is F\n");
        break;
        case 0:
        printf("Your grade is F\n");
        break;
default :
printf("Enter valid marks\n");
    }



return 0;
}