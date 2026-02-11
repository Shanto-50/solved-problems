#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int enter, exit;
    int current = 0, max = 0;
    for (int i = 1; i <= x; i++)
    {
        scanf("%d%d", &exit, &enter);
        current = current - exit;
        current = current + enter;
        if (current > max)
            max = current;
    }
    printf("%d", max);
    return 0;
}