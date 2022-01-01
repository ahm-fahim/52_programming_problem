#include <stdio.h>
#include <string.h>

int main()
{
    //variable initialization
    int T, count;
    char str[10001], find_Str[2];

    //task input
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        // input string
        scanf(" %[^\n]", str);

        // input character
        scanf("%s", &find_Str);

        count = 0;

        for (int j = 0; j <= strlen(str); j++)
        {
            if (find_Str[0] == str[j])
            {
                count++;
            }
        }

        // OUTPUT
        if (count != 0)
        {
            printf("Occurrence of '%s' in '%s' = %d\n", find_Str, str, count);
        }
        else
        {
            printf("'%s' is not present\n", find_Str);
        }
    }

    return 0;
}