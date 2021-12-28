#include <stdio.h>

int main()
{
    int T, N, i, j;

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d", &N);

        printf("case %d: ", i + 1);

        for (j = 1; j <= N; j++)
        {
            if (N % j == 0)
            {
                printf(" %d", j);
            }
        }
        printf("\n");
    }
}