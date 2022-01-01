#include <stdio.h>
#include <string.h>

int main()
{
    // variable initialization
    int T, i, j, count[26];
    char S[1001];

    // test case input
    scanf("%d", &T);

    while (T--)
    {
        // input string value
        scanf(" %[^\n]", S);

        // count string value
        for (i = 0; i < strlen(S); i++)
        {
            if (S[i] >= 'a' && S[i] <= 'z')
            {
                count[S[i] - 'a']++;
            }
        }

        // OUTPUT
        for (j = 0; j < 26; j++)
        {
            if (count[j] != 0)
            {
                printf("'%c' = %d\n", 'a' + j, count[j]);
            }
        }
        printf("\n");
    
    } // end while loop

    return 0;
}