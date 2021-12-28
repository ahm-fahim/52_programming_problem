#include <stdio.h>
#include <math.h>

int main()
{
    int T, i, num, sq_root;

    // test case input
    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        // num input
        scanf("%d", &num);

        sq_root = sqrt(num);

        if (sq_root * sq_root == num)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}