# include <stdio.h>

int main(){
    int arr[10];

    int *ptr=arr;
    if(ptr+2==&arr[2]){
        printf("same location\n");
    }
    else{
        printf("Not same location\n");
    }
return 0;
}