# include <stdio.h>

int main(){
   float tax =0, income;
    printf("Enter you income\t", income);
    scanf("%f", &income);
    if(income>=250000 && income<=500000){
tax = tax + 0.05 *(income- 250000);
    }
    if(income>=500000 && income<=1000000){
tax = tax + 0.2 *(income- 500000);
    }
    if(income>=1000000){
tax = tax + 0.3 *(income- 1000000);
    }
printf("The total income tax to be paid by you this year is: %f\n", tax);
    
return 0;
}