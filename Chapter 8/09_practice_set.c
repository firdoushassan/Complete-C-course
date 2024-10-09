# include <stdio.h>
void slice(char *s, int m, int n){
    int i =0;
    while(i<=n){
        s[i]= s[i+m];
        i++;
    }
    s[i]= '\0';
}
int main(){
    char s[]= "coding";
    slice(s, 2, 5);
    printf("%s", s);
return 0;
}