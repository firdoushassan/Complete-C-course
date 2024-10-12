# include <stdio.h>
# include <stdlib.h>

int main(){
    float *ptr;
    // printf("%d\n", sizeof(int));
    // printf("%d\n", sizeof(float));
    // printf("%d\n", sizeof(char));
    ptr = (float*)malloc(5 * sizeof(float));
    for(int i=0;i<5;i++){
        printf("Enter element no. %d\n", i+1);
        scanf("%f", &ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("The value of element no. %d is : %.3f\n", i+1,ptr[i]);
    }


return 0;
}