# include <stdio.h>
    int positive(int *arr, int n){
       int count=0;
       for(int i=0;i<n;i++){
        if(arr[i]>0){
            count++;
        }
       }
       return count;
    }

int main(){
    int arr[]= {-1,2,-3,4,-5,6,7,-8,9};

    printf("No. of positive integers in the array is : %d",  positive(arr,9));
return 0;
}