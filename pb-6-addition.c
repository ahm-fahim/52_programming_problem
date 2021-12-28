#include <stdio.h>
#include <string.h>

int main()
{
    int T, N, i, j, k, sum = 0;

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d", &N);
        j = N % 10;
        k = N / 10000;
        sum = j + k;
        printf("Sum = %d", sum);
    }
    return 0;
}