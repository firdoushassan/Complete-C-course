#include <stdio.h>
void printRight(int * ptr , int a , int b ){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("The values of the array are %d\n", *(ptr));
            ptr++;
        }
    }

}

int main()
{
    int a, b;
    printf("Enter first value\n");
    scanf("%d", &a);
    printf("Enter second value\n");
    scanf("%d", &b);
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the values\n", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printRight(arr,a,b);

    return 0;
}