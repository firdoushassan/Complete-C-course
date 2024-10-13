# include <stdio.h>
# include <stdlib.h>  //to use random number generator
# include <time.h>    //to use time function


int main(){
   int num;
    srand(time(0));
   num = rand()%100+1;
   printf("Number is %d", num); 
return 0;
}