# include <stdio.h>
    int printTable(int *table, int num, int n){
        printf("\n");
         printf("***Multiplication Table of %d***\n", num);
    for(int i=0;i<n;i++){
        table[i]= num*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%d X %d = %d\n",num,i+1, table[i] );
    }
    printf("\t*****x*****");
    }
int main(){
    int table[3][10];
    printTable(table[0], 2, 10);
    printTable(table[1], 7, 10);
    printTable(table[2], 9, 10);
return 0;
}