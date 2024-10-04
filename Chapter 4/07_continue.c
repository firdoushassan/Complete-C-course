# include <stdio.h>

int main(){
    int skip=6;
    int i=0;
    while(i<8){
        i++;
        if(i!=skip){
        continue;
        }
        else{
printf("%d", i);
        }
    }
return 0;
}