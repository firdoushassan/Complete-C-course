# include <stdio.h>
void decrypt(char *a){
    char *ptr = a;
    while(*ptr!= '\0'){
        *ptr= *ptr-1;
        ptr++;
    }
}
int main(){
    char a[]= "Uifsf!jt!b!cpnc!jo!ifsf";
    decrypt(a);
    printf("Decrypted text is %s", a);
return 0;
}