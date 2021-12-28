#include <stdio.h>

int main()
{
    int row, col, N, T;

    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        scanf("%d", &N);
        for (row = 1; row <= N; row++)
        {
            for (col = 1; col <= N; col++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}