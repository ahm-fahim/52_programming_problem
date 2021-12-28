#include <stdio.h>

int main()
{
    int i = 1000, count = 0;

    for (i; i >= 1; i--)
    {
        printf("%d\t", i);
        count++;
        if (count == 5)
        {
            printf("\n");
            count = 0;
        }
    }

    return 0;
}