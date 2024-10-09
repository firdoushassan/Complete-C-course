#include <stdio.h>

int main()
{
    char st1[30];
    char st2[30];
    char c;
    int i = 0;
    printf("Enter the value of 1st string\n");
    scanf("%s", st1);
    printf("Enter the value of 2nd string\n");
    while (c != '\n')
    {
        fflush(stdin); // used when numerous scanf are used together to flush(remove) each input
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i-1] = '\0';

    printf("The value of 1st string is %s\n", st1);
    printf("The value of 2nd string is %s\n", st2);
    int val = strcmp(st1, st2);
    printf("comparing these two the value is %d", val);
    return 0;
}