# include <stdio.h>
void printArray(int *ptr, int n){
    for(int i =0;i<n;i++){
        printf("The value of element %d is %d\n", i+1, *(ptr+i));
    }

    ptr[2]= 5555;//This value will change in arr array of main as well!!!
}
int main(){
    int arr[]={12,344,5666,434,6876,345,87};
    printArray(arr,7);
    printf("%d", arr[2]);
return 0;
}