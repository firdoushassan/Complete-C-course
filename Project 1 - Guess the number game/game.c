#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, a, nguess = 1;
    srand(time(0));
    num = rand() % 100 + 1;
    // printf("Number is %d", num);
    do
    {
        printf("Guess the number between 1-100\t", a);
        scanf("%d", &a);
        if (a < num)
        {
            printf("Higher number please!\n");
        }
        else if (a > num)
        {
            printf("Lower number please!\n");
        }
        else
        {
            printf("Woah you guessed it in %d attempts!!!\n", nguess);
        }
        nguess++;
    } while (a != num);
    return 0;
}