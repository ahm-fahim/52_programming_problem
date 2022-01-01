#include <stdio.h>

int main()
{
    // variable initialization
    int T, i, r1, r2, B, ball_played;
    double current_rr, asking_rr; // Run Rates

    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d %d", &r1, &r2, &B);

        ball_played = 300 - B;
        current_rr = (r2 / ball_played) * 6;
        asking_rr = ((r1 - r2 + 1) / B) * 6;
        printf("%0.2lf %0.2lf\n", current_rr, asking_rr);
    }

    return 0;
}