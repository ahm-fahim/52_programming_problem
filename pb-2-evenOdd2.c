/*
    কোনো একটি পূর্ণ সংখ্যা দেওয়া থাকবে, সেটি জোড় না বিজোড় তা বের করতে হবে ।

    ইনপুট
    প্রথম লাইনে একটি সংখ্যা T (1 <= T <= 100) দেওয়া থাকবে । পরবর্তী T সংখ্যক লাইনে একটি করে অঋণাত্মক পূর্ণসংখ্যা n দেওয়া থাকবে ।
    একটি সংখ্যায় সর্বোচ্চ ১০০টি অঙ্ক থাক্তে হবে ।
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int T, i;
    char n[101];

    scanf("%d", &T);

    for (i = 1; i <= T; i++)
    {
        scanf("%s", &n);

        int len = strlen(n);
        char s = n[len - 1];
        int k = (int)s - 48;

        if (k % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}