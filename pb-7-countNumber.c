#include <stdio.h>
#include <stdlib.h>

int main()
{
    // char line[] = "1 -2 10000 -50 20 7 455";
    char line[100000];
    char *p, *e;
    long input;
    int count = 0;
    p = line;

    // input array value
    scanf("%[^\n]", line);

    for (p = line;; p = e)
    {
        input = strtol(p, &e, 10);
        if (p == e)
        {
            break;
        }
        count++;
    }
    // THIS OUR OUTPUT
    printf("%d\n", count);

    return 0;
}