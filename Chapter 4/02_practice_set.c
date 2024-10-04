# include <stdio.h>

int main(){
    int n=1,i=10, sum=0;
    // while(n<=i){
    // sum+=n;
    // n++;
    // }
    // printf("%d",sum);
   do{
       sum = sum+n;
       n++;
      
   }
   while(n<=i);
    printf("%d", sum);
   
return 0;
}