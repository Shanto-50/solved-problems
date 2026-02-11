#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int p, q, level;
    int visited[101] = {0};
    scanf("%d", &p);
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &level);
        visited[level] = 1;
    }
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &level);
        visited[level] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");

    return 0;
}