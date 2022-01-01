#include <stdio.h>

int main()
{
    int T, N, i,j;
    long long int fact = 1;

    scanf("%d", &T);

    for(i = 0; i < T; i++){
        scanf("%d", &N);

        for(j = 2; j <= N; j++){
            fact = fact * j;
        }
        printf("%lld\n",fact);
    }
    return 0;
}