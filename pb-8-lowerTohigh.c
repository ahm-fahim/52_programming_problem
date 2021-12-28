#include <stdio.h>

int main()
{
    // variable declaration
    int T, i;
    int n1, n2, n3;
    int low, mid, high;

    // input test case
    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        // input 3 number
        scanf("%d %d %d", &n1, &n2, &n3);

        // n1 is the lowest number
        if (n1 <= n2 && n1 <= n3)
        {
            low = n1;

            if (n2 <= n3)
            {
                mid = n2;
                high = n3;
            }
            else
            {
                mid = n3;
                high = n2;
            }
        }
        // n2 is the lowest number
        else if (n2 <= n3 && n2 <= n1)
        {
            low = n2;

            if (n1 <= n3)
            {
                mid = n1;
                high = n3;
            }
            else
            {
                mid = n3;
                high = n1;
            }
        }
        // n3 is the lowest number
        else
        {
            low = n3;

            if (n1 <= n2)
            {
                mid = n1;
                high = n2;
            }
            else
            {
                mid = n2;
                high = n1;
            }
        }

        //here is the output 
        printf("%d %d %d\n", low, mid, high);

    } // end breaket of loop

    return 0;
}