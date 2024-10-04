# include <stdio.h>

int main(){
    float Celsius, Farenheit;
    printf("Enter temperature in Celsius \t",Celsius);
    scanf("%f", &Celsius);
    float convert = (Celsius*9/5)+32;
    printf("The value of celsius in farenheit is %f",convert);

return 0;
}