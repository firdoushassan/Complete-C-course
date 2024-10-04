#include <stdio.h>

int main()
{
    int sub1, sub2, sub3;
    float total;
    printf("Enter marks for Subject 1\n", sub1);
    scanf("%d", &sub1);
    printf("Enter marks for Subject 2\n", sub2);
    scanf("%d", &sub2);
    printf("Enter marks for Subject 3\n", sub3);
    scanf("%d", &sub3);

    total = (sub1 + sub2 + sub3) / 3;
    if ((total < 40) || sub1 < 33 || sub2 < 33 || sub3 < 33)
    {
        printf("Your total percentage is %d and you have failed", (int)total);
    }
    else
    {
        printf("Your total percentage is %d and you have passed", (int)total);
    }
    return 0;
}