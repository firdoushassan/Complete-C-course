#include <stdio.h>

int main()
{
    float i = 0;
    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("The values are %d\n", (int)i);
        }
        i++;
    }
    return 0;
}