# include <stdio.h>
// One can modify a string using *pointer but not using simple str[]
int main(){
//    char str[]= {'H','E','L','L','O','\0'};
   char *str="HELLO";
   str = "BYE";
    // char str[]= "HELLO";
    printf("%s", str);
    // char s[20];
    // printf("Enter the string \n", s);
    // scanf("%s", s);
    // printf("Your entered string is %s", s);
return 0;
}