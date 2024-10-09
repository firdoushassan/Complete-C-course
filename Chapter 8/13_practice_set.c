# include <stdio.h>
int present(char st[], char c){
    char *ptr=st;
    int i=0;
    int count = 0;
    while(*ptr!= '\0'){
        if (st[i] == c){
            count++;
        }
        ptr++;
        i++;
    }
return count;
}
int main(){
    char st[]= "Halloween is awesome.I like it very much";
    int count = present(st, 'e');
    printf("The character is present %d times", count);
return 0;
}