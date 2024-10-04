# include <stdio.h>

int main(){
    float length, breadth;
    printf("Enter the Length for the reactangle\n");
    scanf("%f",&length);
    printf("Enter the Breadth for the reactangle\n");
    scanf("%f",&breadth);
    float area = length*breadth;
    printf("The area of the rectangle is %f", area);

return 0;
}