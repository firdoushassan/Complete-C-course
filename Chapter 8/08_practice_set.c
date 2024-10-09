# include <stdio.h>
 int strlen(char *st){
     char *ptr = st;
     int len = 0;
     while(*ptr!='\0'){
     len++;
     ptr++;
 }
 return len;
 }


int main(){
 char st[]= "hello";
 int l = strlen(st);
 printf("%d", l);
return 0;
}