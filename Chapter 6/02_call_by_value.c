# include <stdio.h>
int sum(int a,int b);


int main(){
    int a=3,b=4;
    printf("The value of 3+4 is %d", sum(a,b));
return 0;
}



int sum(int a,int b){
    return a+b;
}