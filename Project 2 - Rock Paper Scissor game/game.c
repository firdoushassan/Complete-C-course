#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rps(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }
    if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }
}
int main()
{
    srand(time(0));
    char you, comp;
    int num;
    num = rand()%100+1;
    if(num<33){
        comp= 'r';
    } 
    else if(num>33 && num<66){
        comp= 'p';
    } 
    else{
        comp= 'r';
    } 
    printf("Enter 'r' for rock, 'p' for paper and 's' for scissors\n");
    scanf("%c", &you);
    int result = rps(you, comp);
    printf("You chose %c and computer chose %c \n", you, comp);
    if (result == 0)
    {
        printf("Game draw!\n");
    }
    else if (result == 1)
    {
        printf("Game won!\n");
    }
    else
    {
        printf("Game lost!\n");
    }
    return 0;
}