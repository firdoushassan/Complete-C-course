# include <stdio.h>
int fib(int x);


int main(){
    int a;
     printf("Enter the value \n");
    scanf("%d", &a);
    printf("The element of the fibonacci series is %d", fib(a));
return 0;
}


int fib(int x){
    if(x==0){
        return 0;
    }
    else if(x==1){
        return 1;
    }
    else{
        int a;
        a=fib(x-1)+fib(x-2);
        return a;
    }
}