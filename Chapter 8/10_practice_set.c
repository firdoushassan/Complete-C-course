# include <stdio.h>
void encrypt(char *a){
    char *ptr = a;
    while(*ptr!= '\0'){
        *ptr= *ptr+1;
        ptr++;
    }
}
int main(){
    char a[]= "There is a bomb in here";
    encrypt(a);
    printf("Encrypted text is %s", a);
return 0;
}