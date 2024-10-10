# include <stdio.h>
#include <string.h>

typedef struct vector{
    int x;
    int y;
}vector;

int main(){
    vector v1,v2;
    v1.x = 46;
    v1.y = 23;
    printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);
    v2.x = 79;
    v2.y = 64;
    printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);
return 0;
}