# include <stdio.h>
void printAdd(int a){
    printf("The address of variable a is %u\n", &a);
}

int main(){
    int i=4;
    printf("The address of variable i is %u\n", &i);
    printAdd(i);
return 0;
}