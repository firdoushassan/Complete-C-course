# include <stdio.h>

int main(){
    int num;
    printf("enter the number\n", num);
    scanf("%d", &num);
    if(num==1){
        printf("Number is 1\n");
    }
    else if(num==2){
printf("Number is 2\n");
    }
    else if(num ==3){
        printf("Number is 3\n");
    }
    else{
        printf("Number is not 1,2 or 3");
    }
return 0;
}