# include <stdio.h>

typedef struct complex{
    int real;
    int img;
}comp;


void display(comp c){
    printf("The value for real part is %d\n", c.real);
    printf("The value for imaginary part is %d\n", c.img);

} 
int main(){
    comp nums[5];
    for(int i =0;i<5;i++){
        printf("Enter the real value for num "); 
        scanf("%d", &nums[i].real);
        printf("Enter the img value for num "); 
        scanf("%d", &nums[i].img);


    }
    for(int i =0;i<5;i++){
        display (nums[i]);


    }
return 0;
}