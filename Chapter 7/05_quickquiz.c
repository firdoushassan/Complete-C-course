# include <stdio.h>

int main(){
    int i = 456,j=456;
    int *ptr = &i;
    int *ptr2 = &j;
    ptr=ptr-1;
   if(*ptr==*ptr2){
        printf("The value of ptr is %u\n", ptr);
   }
   else{
        printf("Null\n", ptr);
   }
    printf("The value of ptr is %u\n", ptr);
    printf("The value of ptr2 is %u\n", ptr2);
    
return 0;
}