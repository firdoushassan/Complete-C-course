# include <stdio.h>

int main(){
    int c;
    printf("Enter age\n", c);
    scanf("%d", &c);
    
    if(c > 90)
    {
        printf("You are overage,you cannot drive\n");
    }
    if (c >= 18 && c <= 90)
    {
        printf("You can drive\n");
    }
    if (c<18)
    {
        printf("You are underage,you cannot drive\n");
    }
    return 0;
}